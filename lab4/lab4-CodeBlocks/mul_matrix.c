#include <stdio.h>
#include <stdlib.h>

void print_matrix(int, int **);
void do_mul(int, int**, int**,int**);
/*
mul matrix
*/
int mul_matrix(){
    int n, i, j, **matrix1, **matrix2, **ans_matrix;
    do {
        fflush(stdin);

        printf("Enter matrix's degree n(-1 to exit): ");
        scanf("%d", &n);
        matrix1 = (int**)malloc(n * sizeof(int*));
        matrix2 = (int**)malloc(n * sizeof(int*));
        ans_matrix = (int**)malloc(n * sizeof(int*));
        printf("Enter matrix A: ");
        for (i = 0; i < n; i++) {
            ans_matrix[i] = (int*)malloc(n * sizeof(int));
            memset(ans_matrix[i], 0, n * sizeof(int));
            matrix1[i] = (int*)malloc(n * sizeof(int));
            for (j = 0; j < n; j++)
                scanf("%d", &matrix1[i][j]);
        }
        printf("Enter matrix B: ");
        for (i = 0; i < n; i++) {
            matrix2[i] = (int*)malloc(n * sizeof(int));
            for (j = 0; j < n; j++)
                scanf("%d", &matrix2[i][j]);
        }

        do_mul(n, ans_matrix, matrix1, matrix2);
        print_matrix(n, ans_matrix);
        free(ans_matrix);
        free(matrix1);
        free(matrix2);
    } while (n > 0);

    return 0;
}

void do_mul(int n,int **ans_matrix, int **matrix1, int **matrix2){
    int i, j, k;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            for (k = 0; k < n; k++)
                ans_matrix[i][j] += matrix1[i][k] * matrix2[k][j];
    }

}

void print_matrix(int n, int **matrix){
    int i, j;
    printf("A * B is: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j ++) {
            printf(" %d", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
