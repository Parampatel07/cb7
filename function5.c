// write a programe to create function with return and with argument 
// write a programe to findout which number is maximum
#include<stdio.h>
int GetMax(int a,int b)
{
    if(a>b)
    {
        printf("A is greater");
        return a;
    }
    else if(b>a)
    {
        printf("B is greater");
        return b;
    }
    else
    {
        printf("All are same");
        return b;
    }
}
void main()
{
    int num1,num2,temp;
    printf("Enter value for num1");
    scanf("%d",&num1);
    printf("Enter value for num2");
    scanf("%d",&num2);
    temp=GetMax(num1,num2);
    printf("\nTemp is %d",temp);

}