// write a programe to print two number in words accpet numbers from user in integer
// 56 -> five six
// 29 - two nine
#include <stdio.h>
void main()
{
    int number, first, second;

    printf("Enter value for number");
    scanf("%d", &number);

    // +,-,*,/,%,>,<,>=,<=,==,<,!=

    //  /,%

    first = number / 10;
    second = number % 10;

    // printf("this is first number %d \n this is second number %d",first,second);
    if (number < 10 || number > 99)
    {
        printf("enter 2 digit number only");
    }
    else
    {

        switch (first)
        {
        case 1:
            printf("One");
            break;

        case 2:
            printf("Two");
            break;

        case 3:
            printf("Three");
            break;

        case 4:
            printf("FOur");
            break;

        case 5:
            printf("five");
            break;

        case 6:
            printf("six");
            break;

        case 7:
            printf("seven");
            break;

        case 8:
            printf("Eight");
            break;

        case 9:
            printf("nine");
            break;

        case 0:
            printf("Zero");
            break;
        }
        switch (second)
        {
        case 1:
            printf(" One");
            break;

        case 2:
            printf(" Two");
            break;

        case 3:
            printf(" Three");
            break;

        case 4:
            printf(" FOur");
            break;

        case 5:
            printf(" five");
            break;

        case 6:
            printf(" six");
            break;

        case 7:
            printf(" seven");
            break;

        case 8:
            printf(" Eight");
            break;

        case 9:
            printf(" nine");
            break;

        case 0:
            printf(" Zero");
            break;
        }
    }
}