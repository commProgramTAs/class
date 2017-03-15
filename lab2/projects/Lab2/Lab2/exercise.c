#include <stdlib.h>
#include <stdio.h>

int main() {
    char word = "", eat = "", result = "";

    while(1){
        printf("請輸入一個字母: ");
        scanf("%c", &word);
        scanf("%c", &eat);
        if (word >= 'a' && word <= 'z') {
            printf("%c 是小寫\n", word);
            result = word - ('a' - 'A');
            printf("%c 的大寫是: %c\n\n", word, result);
        }
        else if (word >= 'A' && word <= 'Z') {
            printf("%c 是大寫\n", word);
            result = word + ('a' - 'A');
            printf("%c 的小寫是: %c\n\n", word, result);
        }
        else if (word == ' ') {
            break;
        }
        else {
            printf("%c 不是英文字母\n\n", word);
        }
    }
	return 0;
}
