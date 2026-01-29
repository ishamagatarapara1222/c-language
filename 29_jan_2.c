#include <stdio.h>

int main() {
    int n, i;
    int even[100], odd[100]; // Extra space for safety
    int eCount = 0, oCount = 0;

    // Minimum size check loop
    do {
        printf("Array ki size enter karein (Minimum 10): ");
        scanf("%d", &n);
        if(n < 10) {
            printf("Bad input! Size must be at least 10.\n");
        }
    } while(n < 10);

    int arr[n];

    // Array elements input
    printf("%d elements enter karein:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        
        // Logic: Check if even or odd
        if(arr[i] % 2 == 0) {
            even[eCount] = arr[i];
            eCount++;
        } else {
            odd[oCount] = arr[i];
            oCount++;
        }
    }

    // Even array print karna
    printf("\nEven Elements Array: ");
    for(i = 0; i < eCount; i++) {
        printf("%d ", even[i]);
    }

    // Odd array print karna
    printf("\nOdd Elements Array: ");
    for(i = 0; i < oCount; i++) {
        printf("%d ", odd[i]);
    }

    printf("\n");
    return 0;
}