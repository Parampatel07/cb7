// write a programe to find bmi using function
#include <stdio.h>
int GetTotInch(int foot)
{
    int totalinch;
    totalinch=foot*12;
    return totalinch;
}
int GetExactInch(int a,int b)
{
    int exactinch;
    exactinch=a+b;
    return exactinch;
}
float GetMeter(int a)
{
    float meter;
    meter=a/39.37;
    return meter;
}
float GetBmi(int weight,float meter)
{
    float bmi;
    bmi=weight/(meter*meter);
    return bmi;
}
void main()
{
    int weight, foot, inch,totalinch,exactinch;
    float meter,bmi;
    printf("Enter your weight");
    scanf("%d", &weight);
    printf("Enter your height in foot");
    scanf("%d", &foot);
    printf("Enter your height in inch");
    scanf("%d", &inch);
    totalinch=GetTotInch(foot);
    printf("\nTotal inch is %d",totalinch);
    exactinch=GetExactInch(inch,totalinch);
    printf("\nExact inch is %d",exactinch);
    meter=GetMeter(exactinch);
    printf("\nMeter is %f",meter);
    bmi=GetBmi(weight,meter);
    printf("\n\nYOur bmi is %f",bmi);
}