#include <stdio.h>

int main() {
    int M, N;
    int i, j;
    int matrix[10][10];   
    int rowSum, colSum;

    printf("Enter number of rows (M): ");
    scanf("%d", &M);
    printf("Enter number of columns (N): ");
    scanf("%d", &N);

    printf("\nEnter elements of the %dx%d matrix:\n", M, N);
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe entered matrix is:\n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of each row:\n");
    for (i = 0; i < M; i++) {
        rowSum = 0;
        for (j = 0; j < N; j++) {
            rowSum += matrix[i][j];
        }
        printf("Row %d = %d\n", i + 1, rowSum);
    }

    printf("\nSum of each column:\n");
    for (j = 0; j < N; j++) {
        colSum = 0;
        for (i = 0; i < M; i++) {
            colSum += matrix[i][j];
        }
        printf("Column %d = %d\n", j + 1, colSum);
    }

    return 0;
}
