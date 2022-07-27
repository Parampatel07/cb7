// example of array
#include <stdio.h>
void main()
{
    int books[5], count = 0;

    // input in array
    for (count = 0; count < 5; count++)
    {
        printf("Enter pages of book %d ", count + 1);
        scanf("%d", &books[count]);
    }

    //output of array
    for(count=0;count<5;count++)
    {
        printf("\nPages for book %d are %d ",count+1,books[count]);
    }
}