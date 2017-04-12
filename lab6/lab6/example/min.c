#include <stdio.h>

int min(int, int);

int min_f() {
    int A, B;

    printf("Enter two numbers: ");
    scanf("%d%d", &A, &B);
    printf("%d", min(A, B));
    printf("\n\n");

    return 0;
}

int min(int A,int B) {
    return A < B ? A : B;
}
