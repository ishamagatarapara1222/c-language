#include <stdio.h>

int main() {
    int size, sum = 0;

    // 1. Get the array size (assuming a square matrix for diagonal operations)
    printf("Enter the array's row & column size: ");
    scanf("%d", &size);

    int a[size][size];

    // 2. Input array elements
    printf("\nEnter array's elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // 3. Logic to find the sum of anti-diagonal elements
    // Anti-diagonal condition: row index + column index == size - 1
    for (int i = 0; i < size; i++) {
        sum += a[i][size - 1 - i];
    }

    // 4. Display the result
    printf("\nThe sum of anti-diagonal elements of an Array: %d\n", sum);

    return 0;
}