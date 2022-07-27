// write a programe to take input of user's name
#include <stdio.h>
void main()
{
    char name[5], count = 0;

    printf("Enter letter of your name ");
    for (count = 0; count < 5; count++)
    {
        scanf("%c", &name[count]);
    }
    printf("your name is \n");
    for(count=0;count<5;count++)
    {
        printf("%c", name[count]);
    }
}