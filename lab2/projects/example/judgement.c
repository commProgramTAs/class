#include <stdio.h>
#include <stdlib.h>

int judge(){
    int a;
    printf("input a:");
    //if else
    scanf("%d", &a);
    if (a == 1) {
        printf("a = 1\n");
    }
    else if (a == 2) {
        printf("a = 2\n");
    }
    else {
        printf("a is not equal 1 or 2.\n");
    }
    //switch
    switch (a) {
        case 1:
            printf("a = 1\n");
            break;
        case 2:
            printf("a = 2\n");
            break;
        default:
            printf("a is not equal 1 or 2.\n");
            break;
  }
  //三元運算子
  a == 1 ? printf("a = 1") : printf("a != 1");
  return 0;
}
