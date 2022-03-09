CFLAGS=-ffreestanding -nostdlib

all:
	cat typedefs.h vars.c memcpy.c memrep.c strlen.c strcmp.c > all.c
	gcc $(CFLAGS) all.c -o all.o
	sh -c 'printf "typedef unsigned char uint8_t;\ntypedef unsigned int size_t;\n" > funcdefs.h'
	sh -c "tclsh prototype.tcl >> funcdefs.h"