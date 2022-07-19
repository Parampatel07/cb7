// write a program to accept 3 months number from user (must be between 1 to 12) and findout display which month has least days using nested decision making
#include <stdio.h>
void main()
{
    int month;
    printf("Enter your month");
    scanf("%d", &month);
    if (month > 12 || month < 1)
    {
        printf("This is invalid month");
    }
    else
    {
        if (month == 2)
        {
            printf("it has 28/29 days");
        }
        else if (month <= 7)
        {
            if (month % 2 == 0)
            {
                printf("This month has 30 days");
            }
            else if (month % 2 != 0)
            {
                printf("This month has 31 days");
            }
        }
        else if (month>7)
        {
            if (month % 2 != 0)
            {
                printf("This month has 30 days");
            }
            else if (month % 2 == 0)
            {
                printf("This month has 31 days");
            }
        }
        
    }
}