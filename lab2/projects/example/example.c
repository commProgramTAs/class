#include <stdio.h>
#include <stdlib.h>

int example() {
    int n = 0;

    printf("輸入年齡n: ");
    scanf("%d", &n);
    printf("車票錢:");
    if (n < 6) {
        printf("免費!\n");
    }
    else if (n < 12 && n >= 6) {
        printf("半票\n");
    }
    else if (n < 65 && n >= 12) {
        printf("全票\n");
    }
    else if (n >= 65) {
        printf("敬老票\n");
    }
    else {
        printf("請輸入正確年齡!\n");
    }

    return 0;
}
