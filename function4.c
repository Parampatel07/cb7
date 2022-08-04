//write a programe to create function without argument and with return 
//write a programe to peform multiplication
#include<stdio.h>
int Getmulti()
{
    int a=10,b=5,answer;
    answer=a*b;
    printf("Answer is %d",answer);
    return answer;
}
void main()
{
    int num1,num2,temp;
    printf("Enter value for num1");
    scanf("%d",&num1);
    printf("Enter value for num2");
    scanf("%d",&num2);
    temp=Getmulti();
    printf("\nTemp is %d",temp);
}