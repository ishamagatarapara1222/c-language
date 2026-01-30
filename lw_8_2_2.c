#include<stdio.h>
int main(){
	
    int rows, cols;

    // 1. Get array dimensions
    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int a[rows][cols], b[rows][cols], sum[rows][cols];

    // 2. Input for Array A
    printf("\nEnter array A's elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // 3. Input for Array B
    printf("\nEnter array B's elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // 4. Perform addition and store in 'sum' array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // 5. Output the result
    printf("\nOutput (Sum of Array A and B):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n"); // New line after each row
    }

    return 0;
}
