// write a programe to print 4th triangle
#include <stdio.h>
void main()
{
    int row = 0, temp,colum,count=4;

    for (row = 0; row < 5; row++)
    {
        printf("_");
    }
    printf("*_");
    for(colum=2;colum<7 ; colum++)
    {
        printf("\n");
        for (row = 0; row < count; row++)
        {
            printf("_");
        }
        count--;
        for (temp = 0; temp < colum; temp++)
        {
            printf("*_");
        }
    }
}