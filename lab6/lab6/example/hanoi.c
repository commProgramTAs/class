#include <stdio.h>

void hanoi(int n, char from, char buffer, char to) {
    if(n == 1) {
        printf("Move sheet from %c to %c\n", from, to);
    }
    else {
        hanoi(n-1, from, to, buffer);
        printf("Move sheet from %c to %c\n", from, to);
        hanoi(n-1, buffer, from, to);
    }
}

int main() {
    int n;
    printf("�п�J�L�ơG");
    scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C');
    return 0;
}
