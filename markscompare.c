#include <stdio.h>

int main() {
    int marks1[10], marks2[10];
    int i, identical = 1; 
    printf("Mark List 1:\n");
    for (i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &marks1[i]);
    }

    printf("\nMark List 2:\n");
    for (i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &marks2[i]);
    }

    
    for (i = 0; i < 10; i++) {
        if (marks1[i] != marks2[i]) {
            identical = 0; 
            break;
        }
    }

    
    if (identical)
        printf("\nOutput: Identical\n");
    else
        printf("\nOutput: Not Identical\n");

    return 0;
}