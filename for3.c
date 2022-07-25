// write a programe to print following triangle
//  2nd triangle
#include <stdio.h>
void main()
{
    int row = 0,colum=5;
    for(colum=5;colum>0;colum--)
    {
        // printf("hieee");
        for(row=0;row<colum;row++)
        {
            printf("%d ",row+1);
            // row++;
        }
        printf("\n");
        row = 0;
        // colum--;
    }
}