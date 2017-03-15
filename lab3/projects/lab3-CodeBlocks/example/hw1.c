#include <stdio.h>
#include <stdlib.h>

int hw1(){
    int i, j, x = 1, y = 1;

    for (i = 1; i <= 18; i++) {
        for (j = 1; j <= 18; j++) {
            printf("%d x %d = %d\t", x, y, x * y);
            if (!(j % 3)) {
                x -= 2;
                y++;
                printf("\n");
            }
            else {
                x++;
            }
        }
        if (!(i % 3)) {
            x += 3;
            y = 1;
            printf("\n");
        }
    }

    return 0;
}
