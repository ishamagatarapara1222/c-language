#include <stdio.h>

int main() {
    int size;

    // 1. Get the size of the 1D array
    printf("Enter the array's size: ");
    scanf("%d", &size);

    int a[size];

    // 2. Input array elements
    printf("\nEnter array's elements:\n");
    for (int i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // 3. Logic to find and print negative elements
    printf("\nNegative elements from an Array: ");
    for (int i = 0; i < size; i++) {
        if (a[i] < 0) {
            printf("%d", a[i]);
            
            // Add a comma for better formatting, except for the last element
            if (i < size - 1) {
                printf(", ");
            }
        }
    }
    printf("\n");

    return 0;
}