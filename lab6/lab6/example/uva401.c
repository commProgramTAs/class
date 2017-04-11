#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_mirrored_char(char);
char reverse(char);

int hw() {

    char string[100] = {};
    int i, j, strl;
    bool is_palindrome = true, is_mirrored = true;

    while (scanf("%s", string) != EOF) {
        strl = strlen(string);
        is_palindrome = true;
        is_mirrored = true;

        for (i = 0; i < strl; i++) {
            if (string[i] == string[strl - i - 1]) {
                if (!is_mirrored_char(string[i]))
                    is_mirrored = false;
            }
            else {
                is_palindrome = false;
                if (string[i] != reverse(string[strl - i - 1]))
                    is_mirrored = false;
            }
        }

        printf("%s ", string);
        if (is_palindrome && is_mirrored)
            printf("-- is a mirrored palindrome.");
        else if (is_palindrome)
            printf("-- is a regular palindrome.");
        else if (is_mirrored)
            printf("-- is a mirrored string.");
        else
            printf("-- is not a palindrome.");
        printf("\n\n");
    }
    return 0;
}

bool is_mirrored_char(char ch) {
    if (ch == 'A' || ch == 'H' || ch == 'I' || ch == 'M' || ch == 'O'
     || ch == 'T' || ch == 'U' || ch == 'V' || ch == 'W' || ch == 'X'
     || ch == 'Y' || ch == '1' || ch == '8') {
         return true;
     }
     return false;
}

char reverse(char ch) {
    switch (ch) {
        case 'E':
            return '3';
        case 'J':
            return 'L';
        case 'L':
            return 'J';
        case 'S':
            return '2';
        case 'Z':
            return '5';
        case '2':
            return 'S';
        case '3':
            return 'E';
        case '5':
            return 'Z';
    }
}
