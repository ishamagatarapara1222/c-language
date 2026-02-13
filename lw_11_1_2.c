#include <stdio.h>

int main()
{
    int x, y, temp;
    int *p1, *p2;

    printf("Enter value of x: ");
    scanf("%d", &x);

    printf("Enter value of y: ");
    scanf("%d", &y);

    p1 = &x;
    p2 = &y;

    printf("\nBefore swapping:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    // Swapping using pointers
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("\nAfter swapping:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}
