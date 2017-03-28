#include <stdio.h>
#include <stdlib.h>
/*
UVA 10346
n: 一開始買的菸數
k: 多少個菸頭可以換一支菸
bounus: 藉由菸頭得到的菸
head: 菸頭
total: 總菸頭數
*/
int hw2(){
    int n, k, bonus, total, head;

    while (scanf("%d %d", &n, &k) != EOF) {
        total = n;
        head = n;
        for (bonus = n / k; bonus != 0; bonus = head / k) {
            total += bonus;
            head = bonus + head % k;
        }
        printf("%d\n", total);
    }

    return 0;
}
