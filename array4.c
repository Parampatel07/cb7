// 1] write a programe to take name as input from user and display it in reverse
#include <stdio.h>
#include <stdlib.h>
void main()
{
    char name[50];
    int count, temp;
    printf("Enter your name");
    for (count = 0; count < 50; count++)
    {
        scanf("%c", &name[count]);
        if (name[count] == '\n')
        {
            break;
        }
    }
    for (count = 50; count > 0; count--)
    {
        if (name[count] == '\n')
        {
            temp = count;
        }
    }
    printf("\ntemp is %d", temp);
    for(count=temp;count>0;count--)
    {
        printf("%c", name[count]);
    }
}