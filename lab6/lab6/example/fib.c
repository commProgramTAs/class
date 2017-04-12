#include <stdio.h>

int fib(int);

int fib_f(){
    int n, i;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("%d ", fib(i));
    }

    printf("\n\n");

    return 0;
}

int fib(int n) {
    if (n <= 2) {
        return 1;
    }
    return fib(n - 2) + fib(n - 1);
}
