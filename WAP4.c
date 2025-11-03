#include <stdio.h>

int isPrime(int num) {
    int i;
    if (num <= 1)
        return 0;
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n, i;

    printf("number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Prime elements: ");
    for (i = 0; i < n; i++) {
        if (isPrime(arr[i]))
            printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
