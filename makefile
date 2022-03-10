CFLAGS=-ffreestanding -nostdlib

all:
	cat typedefs.h memcpy.c memrep.c strlen.c strcmp.c strtok.c > all.c
	gcc $(CFLAGS) all.c -o all.o
	sh -c "tclsh prototype.tcl > funcdefs.h"
	ar rcs libhlibc.a all.o