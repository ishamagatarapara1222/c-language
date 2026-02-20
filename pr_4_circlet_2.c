#include <stdio.h>

int main() {
    int i, j;
    int count = 11; 

    
    for (i = 1; i <= 4; i++) {
        
        
        for (j = 1; j <= i; j++) {
            printf("%d ", count);
            count++; 
        }

    
        printf("\n");
    }

    return 0;
}