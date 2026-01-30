#include <stdio.h>

int main() {
    int rows = 5, cols = 5;
    int a[5][5];
    int sum = 0;

    // 1. Input array elements
    printf("Enter array's elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nOutput:\n");
    // 2. Logic to print boundary elements and calculate sum
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Check if element is on the boundary
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                printf("%d ", a[i][j]);
                sum += a[i][j];
            } else {
                // Print spaces for internal elements to maintain shape
                printf("  "); 
            }
        }
        printf("\n");
    }

    // 3. Display the total sum
    printf("\nThe sum of boundary elements of an Array: %d\n", sum);

    return 0;
}