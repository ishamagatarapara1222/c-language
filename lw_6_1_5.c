#include <stdio.h>

int main()
{
    int startYear, endYear;

    printf("Enter starting year: ");
    scanf("%d", &startYear);

    printf("Enter ending year: ");
    scanf("%d", &endYear);

    printf("Leap years between %d and %d are:\n", startYear, endYear);

    while (startYear <= endYear)
    {
        if ((startYear % 400 == 0) || 
            (startYear % 4 == 0 && startYear % 100 != 0))
        {
            printf("%d\n", startYear);
        }
        startYear++;
    }

    return 0;
}
