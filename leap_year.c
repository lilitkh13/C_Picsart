#include <stdio.h>

int main()

{
    int year = 0;
    printf("Enter a year: ");
    scanf(" %i", &year);

    if ( year % 4 == 0 && year % 100 != 0)
    {
        printf("It is a leap year.\n");
    }
    else
    printf("It is NOT a leap year.\n");
}