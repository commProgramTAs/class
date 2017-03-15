#include <stdio.h>
#include <stdlib.h>

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
