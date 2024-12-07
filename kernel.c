#include "types.h"


void print(char* string){
	static uint16_t* VideoMemory = (uint16_t*)0xb8000;

	for(int i = 0; string[i] != '\0'; i++){
		VideoMemory[i] = (VideoMemory[i] & 0xff00) | string[i];
	}
}

typedef void(*constructor)();

extern constructor* start_cons;
extern constructor* end_cons;

extern void callConstructors()
{
	for(constructor* i = start_cons; i != end_cons; i++)
	(*i)();
}
// int counter = 0;
extern void FeyKernelMain(const void* multiboot_structure, uint32_t){
//      if (counter == 1000){
//           print("_____________booting_______;)");
//           while(1);
//           }
// 
//      else{
//      for (int i = 0; i<1000; i++){
     do{
     print("..............fey-os kernel! written  in c:......................");
     print("..............fey-os kernel! written  in c:...................... ;)");
     }
     // counter++;
     
     while(1);
    
     
     
}
