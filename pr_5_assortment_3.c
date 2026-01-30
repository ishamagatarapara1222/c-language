#include <stdio.h>

int main() {
    int rows, cols;

    // 1. Get the array dimensions from the user
    printf("Enter the array's row & column size: ");
    scanf("%d", &rows);
    cols = rows; // Assuming square matrix as per the example input

    int a[rows][cols];

    // 2. Input array elements
    printf("\nEnter array's elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // 3. Logic to display the Transpose Matrix
    printf("\nThe transpose matrix of an array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Note: Printing a[j][i] instead of a[i][j] creates the transpose
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }

    return 0;
}