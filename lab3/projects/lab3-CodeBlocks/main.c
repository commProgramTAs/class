#include <stdio.h>
#include <stdlib.h>

int main(){
    char input[20] = "";

    do {
        printf("lab3 example: ");
        scanf("%s", &input);

        if (!strcmp(input, "ex1")) {
            ex1();
        }
        else if (!strcmp(input, "ex2")) {
            ex2();
        }
        else if (!strcmp(input, "ex3")) {
            ex3();
        }
        else if (!strcmp(input, "hw1")) {
            hw1();
        }
        else if (!strcmp(input, "hw2")) {
            hw2();
        }
    } while (strcmp(input, "exit"));

    system("pause");

    return 0;
}
