GCCPARAMS = -m32   -nostdlib  -fno-builtin 
ASPARAMS  = --32
LDPARAMS  = -melf32_i386

objects   = loader.o kernel.o

%.o: %.c
	gcc $(GCCPARAMS) -o $@ -c $<

%.o: %.s
	as $(ASPARAMS) -o $@ $<

feykernel.bin: linker.ld $(objects)
	ld$( LDPARAMS) -T $< -o $@ $(objects)


feykernel.iso: feykernel.bin
	mkdir iso
	mkdir iso/boot
	mkdir iso/boot/grub
	cp $< iso/boot/
	echo 'set timeout=0' >> iso/boot/grub/grub.cfg
	echo 'set default-0' >> iso/boot/grub/grub.cfg
	echo '' >> iso/boot/grub/grub.cfg
	echo 'menuentry "fey-os" {' >> iso/boot/grub/grub.cfg
	echo ' multiboot /boot/feykernel.bin' >> iso/boot/grub/grub.cfg
	echo ' boot' >> iso/boot/grub/grub.cfg
	echo '}' >> iso/boot/grub/grub.cfg
	grub-mkrescue --output=$@ iso
	rm -rf iso
