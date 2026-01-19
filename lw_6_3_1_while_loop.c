
#include <stdio.h>

int main() {
    int N, i = 1, sum = 0;

    printf("Enter a positive integer N: ");
    scanf("%d", &N);

    while (i <= N) {
        sum += i;
        i++;
    }

    printf("Sum of numbers from 1 to %d is: %d\n", N, sum);

    return 0;
}
