#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ex3(){
    int randNum, pickNum;
    srand(time(NULL));
    randNum = rand() % 100 + 1;
    do {
        printf("pick a number: ");
        scanf("%d", &pickNum);
        if (pickNum > randNum) {
            printf("Your number is bigger than random number.\n");
        }
        else if (pickNum < randNum) {
            printf("Your number is smaller than random number.\n");
        }
        else {
            printf("Your number %d is the Answer!!\n\n", pickNum);
        }

    } while (pickNum != randNum);

    return 0;
}
