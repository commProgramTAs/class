#include <stdio.h>
#include <stdlib.h>
/*
UVA 10346
n: �@�}�l�R���Ҽ�
k: �h�֭ӵ��Y�i�H���@���
bounus: �ǥѵ��Y�o�쪺��
head: ���Y
total: �`���Y��
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
