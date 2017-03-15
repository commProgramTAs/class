#include <stdio.h>
#include <stdlib.h>

int data_size(){
    // sizeof
    printf("sizeof(char):	%d\n", sizeof(char));
    printf("sizeof(unsigned char):	%d\n", sizeof(unsigned char));
    printf("sizeof(signed char):	%d\n\n", sizeof(signed char));

    printf("sizeof(int):	%d\n", sizeof(int));
    printf("sizeof(unsigned int):	%d\n", sizeof(unsigned int));
    printf("sizeof(signed int):	%d\n\n", sizeof(signed int));
    printf("sizeof(long int):	%d\n", sizeof(long int));
    printf("sizeof(short int):	%d\n", sizeof(short int));
    printf("sizeof(unsigned short):	%d\n", sizeof(unsigned short));
    printf("sizeof(signed short):	%d\n\n", sizeof(signed short));

    printf("sizeof(float):	%d\n", sizeof(float));
    printf("sizeof(double):	%d\n\n", sizeof(double));

    printf("sizeof(unsigned long long):	%d\n", sizeof(unsigned long long));
    printf("sizeof(long double): %d\n", sizeof(long double));

    return 0;
}
