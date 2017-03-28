#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void print_matrix(int, int **);
int do_det(int, int**);
/*
do det(A)
�B�J:
1. ��t�έn�D�G���ʺA�}�C���Ŷ��A�M���J�x�}
2. �p��x�}��C��
3. �L�X�x�}
*/
int det_matrix(){
    int n, i, j, **matrix;
    do {
        fflush(stdin);

        printf("Enter matrix's degree n(-1 to exit): ");
        scanf("%d", &n);
        matrix = (int**)malloc(n * sizeof(int*));   // �ʺA�}�C�A���n�D�O�d���X�C�@�檺���Фj�p���O����Ŷ�
        printf("Enter the matrix: ");
        for (i = 0; i < n; i++) {
            matrix[i] = (int*)malloc(n * sizeof(int));     // �n�D�O�d�C�ӫ��Щҫ��쪺�ʺA�}�C�j�p���O����Ŷ�
            for (j = 0; j < n; j++) {
                scanf("%d", &matrix[i][j]);    // �w�T�O�ʺA�}�C���Ŷ��A�i�H�}�l��J
            }
        }

        print_matrix(n, matrix);
        printf("det is: %d\n\n", do_det(n, matrix));
        free(matrix);   //������O�d���ʺA�}�C�Ŷ�
    } while (n > 0);

    return 0;
}

/* �p���C�� */
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
			det += sign * matrix[0][i] * do_det(n - 1, submatrix);   // ���jdo_det�A���_�a��l�}�C����C��
		}
		return det;
	}
	else if (n == 2) {    // ����l�}�C�����׳ѤU2�A�����p��
		return (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
	}
}

/* �L�X�}�C */
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
