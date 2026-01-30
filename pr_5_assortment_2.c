#include <stdio.h>

int main() {
    int rows, cols;

    // 1. Get the array dimensions from the user
    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int a[rows][cols];

    // 2. Input array elements
    printf("\nEnter array's elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // 3. Logic to find the largest element
    // Start by assuming the first element is the largest
    int max = a[0][0]; 

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // If current element is greater than max, update max
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
    }

    // 4. Output the result
    printf("\nThe largest element is: %d\n", max);

    return 0;
}
