// write a programe to make function with argument without return
//write a programe to make addition of 2 numbers
#include<stdio.h>
void Getadd(int a,int b)
{
    int answer;
    answer=a-b;
    printf("\nAnswer is %d ",answer);
}
void main()
{
    int num1,num2;

    printf("Enter num1 ");
    scanf("%d",&num1);

    printf("Enter num2 ");
    scanf("%d",&num2);

    Getadd(num1,num2);
}