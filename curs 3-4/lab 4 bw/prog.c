#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>

int function(){
	return 0;
}


int main(int argc, char * argv[]){
	int (*fct)() = &function;
	
	char nume[33] = "\x31\xc0\x50\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\x50\x89\xe2\x53\x89\xe1\xb0\x0b\xcd\x80";
	
	char *p = mmap (0, 4096, PROT_READ | PROT_WRITE | PROT_EXEC, MAP_PRIVATE | MAP_ANONYMOUS | MAP_SHARED, 0, 0);
	
	sprintf(p, "\x31\xc0\x50\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\x50\x89\xe2\x53\x89\xe1\xb0\x0b\xcd\x80");
	
	fct = &p;
	
	fct();
}
