// write a programe to find higest value of user given value 10
#include <stdio.h>
void main()
{
    int numbers[10], count = 0;
    for (count = 0; count < 10; count++)
    {
        printf("Enter number %d  ", count + 1);
        scanf("%d", &numbers[count]);
    }
    for(count=0;count<10;count++)
    {
        printf("\nnumber %d is %d", count+1,numbers[count]);
    }
}
