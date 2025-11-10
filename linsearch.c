#include <stdio.h>

int main() {
    int M, N, i, j, key;
    int matrix[10][10];
    int found = 0;

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

    printf("\nEnter the element to search: ");
    scanf("%d", &key);

    printf("\nSearching for %d...\n", key);
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            if (matrix[i][j] == key) {
                printf("Found at Row %d, Column %d\n", i + 1, j + 1);
                found = 1;
            }
        }
    }

    if (!found)
        printf("Element %d not found in t
