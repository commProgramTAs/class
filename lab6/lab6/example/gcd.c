#include <stdio.h>
#include <stdlib.h>

int gcd(int, int);

int gcd_f() {
    int m, n;

    printf("Enter two numbers to do GCD: ");
    scanf("%d%d",&m ,&n);
    printf("%d", gcd(m, n));

    return 0;
}

int gcd(int m, int n) {
    if(n == 0)
        return m;
    else
        return gcd(n, m % n);
}
