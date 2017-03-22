#include <stdio.h>
#include <stdlib.h>

int main(){
    char input[20] = "";

    do {
        printf("lab4 example: ");
        scanf("%s", &input);

        if (!strcmp(input, "det_matrix")) {
            det_matrix();
        }
        else if (!strcmp(input, "uva406")) {
            uva406();
        }
        else if (!strcmp(input, "mul_matrix")) {
            mul_matrix();
        }
        else if (!strcmp(input, "hw1")) {
            //hw1();
        }
        else if (!strcmp(input, "hw2")) {
            //hw2();
        }
    } while (strcmp(input, "exit"));

    system("pause");

    return 0;
}
