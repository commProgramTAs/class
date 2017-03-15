#include <stdio.h>
#include <stdlib.h>

int operator(){
    int a, b;

    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a mod b = %d\n", a % b);

    printf("a += 1 : %d\n", a += 1);
    printf("a++: %d\n", a++);
    printf("++a: %d\n", ++a);
    a = a + 1;
    printf("a = a + 1: %d\n", a);

    printf("a & 1 = %d\n", a & 1);  //and
    printf("a | 1 = %d\n", a | 1);  //or
    printf("a ^ 1 = %d\n", a ^ 1);  //xor
    printf("~ a = %d\n", ~ a);      //not
    printf("a >> 1 = %d\n", a >> 1);//shift right
    printf("a << 1 = %d\n", a << 1);//shift left

    return 0;
}
