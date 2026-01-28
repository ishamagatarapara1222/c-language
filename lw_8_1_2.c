#include <stdio.h>

int main() {
    int size, i;
    float sum = 0, average;

    // Get the size of the array from user
    printf("Enter array size: ");
    scanf("%d", &size);

    int a[size]; // Declare the array with the user-defined size

    // Input array elements
    printf("Enter array elements:\n");
    for (i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
        sum += a[i]; // Add each element to the sum
    }

    // Calculate the average
    average = sum / size;

    
    printf("\nOutput:\n");
    printf("Average of an Array: %.1f\n", average);

    return 0;
}