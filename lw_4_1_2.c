#include <stdio.h>

int main() {
    int x, y;
    int result;

    printf("Enter value of x: ");
    scanf("%d", &x);

    printf("Enter value of y: ");
    scanf("%d", &y);

    result = (x - y) * (x - y);

    printf("Result: %d", result);
    return 0;
}