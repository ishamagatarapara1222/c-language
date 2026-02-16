#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];
    int *p = arr;

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    printf("Reversed squared elements:\n");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", (*(p + i)) * (*(p + i)));
    }

    return 0;
}
