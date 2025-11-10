#include <stdio.h>

int main() {
    int N, i, j;
    float basic[100], hra, special, totalSalary[100], temp;

    printf("Enter number of employees: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        printf("Enter Basic Salary of Employee %d: ", i + 1);
        scanf("%f", &basic[i]);

        hra = 0.40 * basic[i];       
        special = 0.25 * basic[i];   
        totalSalary[i] = basic[i] + hra + special;
    }

    
    for (i = 0; i < N - 1; i++) {
        for (j = i + 1; j < N; j++) {
            if (totalSalary[i] < totalSalary[j]) {
                temp = totalSalary[i];
                totalSalary[i] = totalSalary[j];
                totalSalary[j] = temp;
            }
        }
    }

    
    printf("\n--- Total Salaries in Descending Order ---\n");
    for (i = 0; i < N; i++) {
        printf("Employee %d: %.2f\n", i + 1, totalSalary[i]);
    }

    return 0;
}
