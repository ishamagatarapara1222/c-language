#include <stdio.h>

int main() {
    int size, i;

    // Get the common size for the arrays
    printf("Enter array size: ");
    scanf("%d", &size);

    int a[size], b[size], c[size];

    // Input elements for Array A
    printf("\nEnter array A's elements:\n");
    for (i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // Input elements for Array B
    printf("\nEnter array B's elements:\n");
    for (i = 0; i < size; i++) {
        printf("b[%d] = ", i);
        scanf("%d", &b[i]);
    }

    // Perform addition and store in Array C
    for (i = 0; i < size; i++) {
        c[i] = a[i] + b[i];
    }

    // Output the resulting Array C
    printf("\nOutput:\nArray C is: ");
    for (i = 0; i < size; i++) {
        printf("%d", c[i]);
        if (i < size - 1) {
            printf(", "); // Add comma between elements
        }
    }
    printf("\n");

    return 0;
}