#include <stdio.h>

void cubeElements(int *p, int r, int c) {
    int i, j;

    printf("Cubes of all elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            int val = *(p + i*c + j);
            printf("%d ", val * val * val);
        }
        printf("\n");
    }
}

int main() {
    int r, c, i, j;
    
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int arr[r][c];

    printf("Enter array elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    cubeElements(&arr[0][0], r, c);

    return 0;
}
