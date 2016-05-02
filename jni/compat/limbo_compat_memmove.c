#include "string.h"

//This should be compiled with -O0 so it stays memmove and doesn't translate to memcpy
// THis is to workaround an issue with libc on some devices

void*  memcpy(void * destination, const void * source, size_t length){
	memmove(destination, source, length);
}