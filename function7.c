// write a programe to make pallindrom checker
#include <stdio.h>
void main()
{
    int number, first, second, third, check[2], user_num[2];

    printf("Enter 3digit value for number");
    scanf("%d", &number);

    // number = 121;
    third = number % 10;
    first = number / 100;
    second = number / 10;
    second = second % 10;
    user_num[0] = first;
    user_num[1] = second;
    user_num[2] = third;
    printf("\nFirst is %d and third is %d and second %d", first, third, second);
    check[0] = third;
    check[1] = second;
    check[2] = first;

    if (check[0] == user_num[0])
    {
        if (check[1] == user_num[1])
        {
            if (check[2] == user_num[2])
            {
                printf("\nNUmber is pallindrome number");
            }
            else
            {
                printf("\nnot pallindromee");
            }
        }
        else
        {
            printf("\nnot pallindromee");
        }
    }
    else
    {
        printf("\nnot pallindromee");
    }
}