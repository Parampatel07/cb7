// write a programe to find higest value of user given value 10
#include <stdio.h>
void main()
{
    int numbers[10], count = 0, temp, flash;
    for (count = 0; count < 10; count++)
    {
        printf("Enter number %d  ", count + 1);
        scanf("%d", &numbers[count]);
    } // loop for input

    for (flash = 0; flash < 9; flash++)
    {
        for (count = flash; count < 10; count++)
        {
            if (numbers[flash] > numbers[count])
            {
                temp = numbers[flash];
                numbers[flash] = numbers[count];
                numbers[count] = temp;
            }
        }
    }

    for (count = 0; count < 10; count++)
    {
        printf("\nnumber %d is %d", count + 1, numbers[count]);
    }
}
