#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void print_matrix(int, int **);
int do_det(int, int**);
/*
do det(A)
步驟:
1. 跟系統要求二維動態陣列的空間，然後輸入矩陣
2. 計算矩陣行列式
3. 印出矩陣
*/
int det_matrix(){
    int n, i, j, **matrix;
    do {
        fflush(stdin);

        printf("Enter matrix's degree n(-1 to exit): ");
        scanf("%d", &n);
        matrix = (int**)malloc(n * sizeof(int*));   // 動態陣列，先要求保留指出每一行的指標大小的記憶體空間
        printf("Enter the matrix: ");
        for (i = 0; i < n; i++) {
            matrix[i] = (int*)malloc(n * sizeof(int));     // 要求保留每個指標所指到的動態陣列大小的記憶體空間
            for (j = 0; j < n; j++) {
                scanf("%d", &matrix[i][j]);    // 已確保動態陣列的空間，可以開始輸入
            }
        }

        print_matrix(n, matrix);
        printf("det is: %d\n\n", do_det(n, matrix));
        free(matrix);   //釋放當初保留的動態陣列空間
    } while (n > 0);

    return 0;
}

/* 計算行列式 */
int do_det(int n, int **matrix) {
	int i, j, k, l, det = 0, sign = -1;

	if (n > 2) {
		int **submatrix;
		submatrix = (int**)malloc((n - 1) * sizeof(int*));
		for (i = 0; i < n; i++) {
			sign = pow(-1, i);
			for (j = 0; j < n - 1; j++) {
				submatrix[j] = (int*)malloc((n - 1) * sizeof(int));
				for (k = 0, l = 0; k < n; k++) {
					if (k != i) {
						submatrix[j][l] = matrix[j + 1][k];
						l++;
					}
				}
				printf("\n");
			}
			print_matrix(n-1, submatrix);
			det += sign * matrix[0][i] * do_det(n - 1, submatrix);   // 遞迴do_det，不斷地算子陣列的行列式
		}
		return det;
	}
	else if (n == 2) {    // 直到子陣列的維度剩下2，直接計算
		return (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
	}
}

/* 印出陣列 */
void print_matrix(int n, int **matrix){
    int i, j;

    printf("Ans is: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j ++) {
            printf(" %d", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
