#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int do_det(int, int**);
/*
do det(A)
*/
int det_matrix(){
    int n, i, j, **matrix;
    do {
        fflush(stdin);

        printf("Enter matrix's degree n(-1 to exit): ");
        scanf("%d", &n);
        matrix = (int**)malloc(n * sizeof(int*));
        printf("Enter the matrix: ");
        for (i = 0; i < n; i++) {
            matrix[i] = (int*)malloc(n * sizeof(int));
            for (j = 0; j < n; j++) {
                scanf("%d", &matrix[i][j]);
            }
        }

        print_matrix(n, matrix);
        printf("det is: %d\n\n", do_det(n, matrix));
        free(matrix);
    } while (n > 0);

    return 0;
}

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
			det += sign * matrix[0][i] * do_det(n - 1, submatrix);
		}
		return det;
	}
	else if (n == 2) {
		return (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
	}
}
