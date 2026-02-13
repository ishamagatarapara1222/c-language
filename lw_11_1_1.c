#include <stdio.h>

int main()
{
    int a[100], n, i;
    int *p;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    p = a;   // pointer points to first element of array

    printf("\nSquare of each element:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", (*p) * (*p));
        p++;   // move pointer to next element
    }

    return 0;
}
