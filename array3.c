// write a programe to take input of user's name
#include<stdio.h>
#include<stdlib.h>
void main()
{
    char name[50], count = 0;
    printf("Enter letter of your name ");
    for (count = 0; count < 50; count++)
    {
        scanf("%c", &name[count]);
        if (name[count]=='\n')
        {
            // exit(0);
            break;
        }
    }
    printf("your name is \n");
    for(count=0;count<50;count++)
    {
        printf("%c",name[count]);
        if(name[count]=='\n')
        {
            break;
        }
    }
}