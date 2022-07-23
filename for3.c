// write a programe to print following triangle
//  2nd triangle
#include <stdio.h>
void main()
{
    int row = 0,colum=5;
    while(colum>0)
    {
        while (row < colum)
        {
            printf("%d ",row+1);
            row++;
        }
        printf("\n");
        row = 0;
        colum--;
    }
}