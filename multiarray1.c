// write a programe to find sum and average of 5 students for 5 subject marks
#include <stdio.h>
void main()
{
    int student[5][5], count,flash;
    for(flash=0;flash<5;flash++)
    {
        printf("Enter marks for student %d",flash+1);
        for (count = 0; count < 5; count++)
        {
            printf("\nEnter marks for subject %d ", count + 1);
            scanf("%d", &student[flash][count]);
        }
    }
}