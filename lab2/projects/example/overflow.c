#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int overflow(){
    // unsigned char
    unsigned char usch = 255;

    printf("unsigned char:	%u\n", usch);
	printf("unsigned char overflow: %u\n\n", ++usch);

    // signed char
    signed char sch = 127;

    printf("signed char:	%d\n", sch);
    printf("signed char overflow:	%d\n\n", ++sch);

    // int
    int integer = INT_MAX;

    printf("integer: %d\n", integer);
    printf("integer overflow: %d\n", ++integer);

    return 0;
}
