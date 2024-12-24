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

extern void FeyKernelMain(const void* multiboot_structure, uint32_t){

     do{
     print("..............fey-os kernel! written  in c:......................");
     print("..............fey-os kernel! written  in c:...................... ;+");
     }
    while(1);
    
     
     
}
