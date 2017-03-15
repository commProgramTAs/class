#include <stdio.h>
#include <stdlib.h>

int data_type(){
    int num = 3;
    char ch = 'a';
    float fl = 1.23456789;
    double doub = 1.23456789;

    printf("%d\n", num);
    printf("%c\n", ch);
    printf("%f\n", fl);
    printf("%f\n", doub);
    scanf("%f", &fl);
    scanf("%lf", &doub);

    printf("%.3f\n", fl);
    printf("sizeof(int): %d\n", sizeof(int));
    printf("sizeof(char): %d\n", sizeof(char));
    printf("sizeof(float): %d\n", sizeof(float));
    printf("sizeof(double): %d\n", sizeof(double));

    return 0;
}
