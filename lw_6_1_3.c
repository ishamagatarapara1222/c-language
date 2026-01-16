#include <stdio.h>

int main() {
    int N, i = 1;

    printf("Enter a number: ");
    scanf("%d", &N);

    while (i <= N) {
        printf("%d ", i);
        i++;
    }

    return 0;
}
