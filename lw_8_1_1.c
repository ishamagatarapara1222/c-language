#include <stdio.h>

int main() {
    int size;

    
    printf("Enter array size: ");
    scanf("%d", &size);

    int a[size]; 
    int i;

    
    printf("Enter array elements:\n");
    for(i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }


    printf("\nLength of an Array: %d\n", size);

    return 0;
}