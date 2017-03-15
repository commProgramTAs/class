#include <stdio.h>
#include <stdlib.h>

int ex2(){
    double a, b;

    while(scanf("%lf %lf", &a, &b) != EOF){
        printf("%.lf\n", a > b ? a - b : b - a);
    }

    return 0;
}
