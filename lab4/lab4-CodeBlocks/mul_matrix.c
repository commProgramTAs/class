#include <stdio.h>
#include <stdlib.h>

void print_matrix(int, int **);
int do_det(int, int**);
/*
do det(A)
*/
int mul_matrix(){
    while(1){
        fflush(stdin);
        int n, i, j, **matrix;

        printf("Enter matrix's degree n: ");
        scanf("%d", &n);
        matrix = (int**)malloc(n * sizeof(int*));
        printf("Enter the matrix: ");
        for (i = 0; i < n; i++) {
            matrix[i] = (int*)malloc(n * sizeof(int));
            for (j = 0; j < n; j++) {
                scanf("%d", &matrix[i][j]);
            }
        }
        do_det(n, matrix);
        print_matrix(n, matrix);
        free(matrix);
    }

    return 0;
}

int do_det(int n, int **matrix){
    int i, j, det = 0, sign = -1;
    for(i = 0; i < n; i++){
        sign *= (-1);
        det += matrix[i][0] * sign;
    }

    return det;
}

void print_matrix(int n, int **matrix){
    int i, j;
    printf("Your matrix is: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j ++) {
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
