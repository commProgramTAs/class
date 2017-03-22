#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int uva406(){
    int Max_array = 1000;
    int N, C, i, j;
    bool array[Max_array + 1];
    memset(array, true, Max_array * sizeof(bool));

    array[0] = false;
    for (i = 2; i <= Max_array; i++) {
        if (array[i]) {
            for (j = i * i; j <= Max_array; j += i) {
                if (array[j]){
                    array[j] = false;
                }
            }
        }
    }

     do {
        int prime_numbers[500], start, end, list_len;
        scanf("%d %d", &N, &C);
        for (i = 1, list_len = 0; i <= N; i++) {
            if (array[i]) {
                prime_numbers[list_len] = i;
                list_len++;
            }
        }
		start = list_len / 2 - C + 1;
		end = list_len / 2 + C - 1;
		if (!(list_len % 2)) start--;
		if (start < 1) start = 0;
		if (end > list_len - 1) end = list_len - 1;

        printf("%d %d:", N, C);
		for (i = start; i < end; i++) {
            printf(" %d", prime_numbers[i]);
		}
		printf(" %d\n\n", prime_numbers[i]);

    } while (N > 0);

    return 0;
}
