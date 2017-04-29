#include <stdio.h>
#include <stdlib.h>

void example(int);
int ex;

int main(){
    char input[20] = "";
    ex = 3;
    do {
        printf("lab6 example: ");
        scanf("%s", &input);

        if (!strcmp(input, "gcd")) {
            gcd_f();
        }
        else if (!strcmp(input, "hw")) {
            hw();
        }
        else if (!strcmp(input, "fib")) {
            fib_f();
        }
        else if (!strcmp(input, "min")) {
            min_f();
        }
        else if (!strcmp(input, "example")) {
            example(1);
        }
    } while (strcmp(input, "exit"));

    system("pause");

    return 0;
}

void example(int a) {
    printf("%d\n", a);
    printf("ex: %d\n", ex);
}
