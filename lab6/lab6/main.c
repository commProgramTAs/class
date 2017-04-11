#include <stdio.h>
#include <stdlib.h>

int main(){
    char input[20] = "";

    do {
        printf("lab6 example: ");
        scanf("%s", &input);

        if (!strcmp(input, "gcd_f")) {
            gcd_f();
        }
        else if (!strcmp(input, "hw")) {
            hw();
        }
    } while (strcmp(input, "exit"));

    system("pause");

    return 0;
}
