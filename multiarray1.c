// write a programe to find sum and average of 5 students for 5 subject marks
#include <stdio.h>
void main()
{
    int student[5][5], count, flash, sum[5],average,total;
    for (flash = 0; flash < 5; flash++)
    {
        printf("Enter marks for student %d", flash + 1);
        for (count = 0; count < 5; count++)
        {
            printf("\nEnter marks for subject %d ", count + 1);
            scanf("%d", &student[flash][count]);
        }
    }
    for (flash = 0; flash < 5; flash++)
    {
        printf("\n\nmarks for student %d are", flash + 1);
        for (count = 0; count < 5; count++)
        {
            printf("\nmarks for subject %d = %d", count + 1, student[flash][count]);
        }
    }
    for(flash=0;flash<5;flash++)
    {
        sum[flash] = 0;
        for (count = 0; count < 5; count++)
        {
            sum[flash] = sum[flash] + student[flash][count];
        }
        printf("\n\nthe total of student %d is %d",flash+1,sum[flash]);
    }
    total=sum[0]+sum[1]+sum[2]+sum[3]+sum[4];
    average=total/5;

    printf("\n\ntotal is %d and average is %d",total,average);
}