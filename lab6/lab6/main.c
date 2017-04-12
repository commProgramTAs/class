#include <stdio.h>
#include <stdlib.h>

int main(){
    char input[20] = "";

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
    } while (strcmp(input, "exit"));

    system("pause");

    return 0;
}
