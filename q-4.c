
#include <stdio.h>

int main() {
    int arr[100], n, i;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    /* Point pointer to the first element of array */
    ptr = arr;

    printf("Squares of the elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", (*ptr) * (*ptr));
        ptr++;  // Move pointer to next element
    }

    return 0;
}
