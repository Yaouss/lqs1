#include <stdio.h>

int main() {
    int M, N;
    int matrix[10][10];
    int i, j;
    int mainDiagSum = 0, oppDiagSum = 0;

    printf("Enter number of rows (M): ");
    scanf("%d", &M);
    printf("Enter number of columns (N): ");
    scanf("%d", &N);

    if (M != N) {
        printf("\nInvalid Matrix! Not a square matrix.\n");
        return 0; 
    }

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

    
    for (i = 0; i < M; i++) {
        mainDiagSum += matrix[i][i];               
        oppDiagSum += matrix[i][M - i - 1];        
    }

    printf("\nSum of Main Diagonal = %d\n", mainDiagSum);
    printf("Sum of Opposite Diagonal = %d\n", oppDiagSum);

    return 0;
}
