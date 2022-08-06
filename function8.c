// write a programe to peform swap without using 3rd variable using function
// --> a = 100,b=200
// -->a=200,b=100
#include <stdio.h>
void GetSwap(int num1,int num2)
{
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("the value of num1 is %d and the value of num2 is %d", num1, num2);
}
void main()
{
    int num1, num2;
    printf("Enter value of num1");
    scanf("%d", &num1);
    printf("Enter value of num2");
    scanf("%d", &num2);

    GetSwap(num1,num2);
}