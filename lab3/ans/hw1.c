#include <stdio.h>
#include <stdlib.h>
/*
18 x 18 乘法表
要依規定排版
*/
int hw1(){
    int i, j, x = 1, y = 1;

    for (i = 1; i <= 18; i++) {
        for (j = 1; j <= 18; j++) {
            printf("%d x %d = %d\t", x, y, x * y);
            if (!(j % 3)) { // 每三列換行
                x -= 2;
                y++;
                printf("\n");
            }
            else {
                x++;
            }
        }
        if (!(i % 3)) { // 每三張table換行
            x += 3;
            y = 1;
            printf("\n");
        }
    }

    return 0;
}
