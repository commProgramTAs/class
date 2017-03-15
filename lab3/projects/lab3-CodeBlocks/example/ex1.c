#include <stdio.h>
#include <stdlib.h>

int ex1(){
    int n, i;

    printf("Enter n(0 < n < 10,000): ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++) {
        printf("%d\n", n * i);
    }

    return 0;
}
