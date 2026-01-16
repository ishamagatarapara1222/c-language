#include <stdio.h>

int main() {
    int N, i = 2; 

    printf("Enter a positive integer N: ");
    scanf("%d", &N);

    if (N < 2) {
        printf("No even numbers in the given range.\n");
        return 0;
    }

    printf("Even numbers from 1 to %d are:\n", N);

    do {
        printf("%d ", i);
        i += 2; 
    } while (i <= N);

    printf("\n");

    return 0;
}
