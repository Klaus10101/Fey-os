# Fey-OS  

Fey-OS is a minimal operating system that Uses grub as it's bootloader 

## 🔥 Focus: Building a Minimal Operating System  
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
A prebuilt Iso is available in the repo  

## 🛠️ Building From Source    

#### **Install Dependencies (Debian-based systems)**  
Run the following command to install all required dependencies:  

```
sudo apt update && sudo apt install build-essential grub-pc-bin xorriso nasm
```
## build

Run the following command in the project directory 
```
make feykernel.iso
```
