 
# Fey-OS  

Fey-OS is a minimal operating system that boots from GRUB:  
 

## 🔥 Focus: Building a Minimal x86 (32-bit) Operating System  
The goal of Fey-OS is to create a **lightweight, minimalistic operating system** with core functionality, including:  
- A simple **kernel written in C**  
- Booting via **GRUB**  
- Basic **system calls and I/O handling** (planned)  
- Support for **user-space applications** (future goal)  

## 🚧 Status: Work in Progress  
- [x] Basic bootloader setup with GRUB  
- [x] Simple kernel that prints a message  
- [ ] Implementing system calls  
- [ ] Adding keyboard input support  
- [ ] Expanding the kernel functionality  

## 📥 Prebuilt ISO  
A prebuilt ISO is available in th repo.  

## 🛠️ Building From Source  

### **Dependencies**  
To build Fey-OS, you need the following packages:  
- **GCC (32-bit cross-compiler for x86)**  
- **LD (GNU Linker for x86 32-bit)**  
- **Make** (to automate the build process)  
- **GRUB** (for bootloader setup)  
- **xorriso** (for ISO generation)  
- **NASM** (for assembly code)  

#### **Installing Dependencies (Debian-based systems)**  
Run the following command to install all required dependencies:  
```sh
sudo apt update && sudo apt install build-essential grub-pc-bin xorriso nasm gcc-multilib
```
#### Build Instructions

To build Fey-OS in the project directory, simply run:
```
make feykernel.iso
```
This will generate feykernel.iso, which can be booted using an emulator like QEMU:
```
qemu-system-i386 -cdrom feykernel.iso
```

or you can use virtual box.

## 🚀 Running on Real Hardware

To run Fey-OS on a physical machine, burn the ISO to a USB drive:
```
sudo dd if=feykernel.iso of=/dev/sdX bs=4M status=progress && sync
```

Replace /dev/sdX with the correct USB device.
