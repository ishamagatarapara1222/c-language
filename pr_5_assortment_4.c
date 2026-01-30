#include <stdio.h>

int main() {
    int rows, cols;
    int row_choice, col_choice;
    int row_sum = 0, col_sum = 0;

    // 1. Get array size
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

    // --- Row Calculation ---
    printf("\nEnter row number: ");
    scanf("%d", &row_choice);

    // Validate row choice
    if (row_choice >= 0 && row_choice < rows) {
        printf("Elements of row %d: ", row_choice);
        for (int j = 0; j < cols; j++) {
            printf("%d", a[row_choice][j]);
            row_sum += a[row_choice][j];
            
            // Print comma if it's not the last element
            if (j < cols - 1) {
                printf(", ");
            }
        }
        printf("\nThe sum of a row %d: %d\n", row_choice, row_sum);
    } else {
        printf("Invalid row number!\n");
    }

    // --- Column Calculation ---
    printf("\nEnter column number: ");
    scanf("%d", &col_choice);

    // Validate column choice
    if (col_choice >= 0 && col_choice < cols) {
        printf("Elements of column %d: ", col_choice);
        for (int i = 0; i < rows; i++) {
            printf("%d", a[i][col_choice]);
            col_sum += a[i][col_choice];

            // Print comma if it's not the last element
            if (i < rows - 1) {
                printf(", ");
            }
        }
        printf("\nThe sum of column %d: %d\n", col_choice, col_sum);
    } else {
        printf("Invalid column number!\n");
    }

    return 0;
}