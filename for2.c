// write a programe to print 3 triangle
#include <stdio.h>
void main()
{
    int row = 0, space;
    for (row = 0; row <= 7; row++)
    {
        printf("*");
        // printf("_");
    }
    for(row=5;row>0;row--)
    {
        printf("\n");
        printf("*");
        for (space = 0; space < row; space++)
        {
            printf(" ");
        }
        printf("*");
    }
    printf("\n");
    printf("*");
}