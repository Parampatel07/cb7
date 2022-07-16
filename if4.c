//write a program to findout bmi of user and decide and print his/her obecity level
/*
    Category	    BMI range - kg/m2
    underweight	     <18.5
    Normal	         18.5 - 25
    Overweight	     25 - 30
    Obese Class I	 30 - 35
    Obese Class II	 35 - 40 */
// && - and 
// || - or 
#include<stdio.h>
void main()
{
    float weight,total_inch,meter,bmi;
    int foot,inch;

    printf("Enter value for weight");
    scanf("%f",&weight);

    printf("Enter value for foot");
    scanf("%d",&foot);

    printf("Enter value for inch");
    scanf("%d",&inch);

    total_inch=foot*12;
    printf("\nValue fo total foot is %f",total_inch);

    inch=inch+total_inch;
    printf("\nValue of inch is %d",inch);

    meter=inch/39.37;
    printf("\nMeter is %f",meter);

    bmi=weight/(meter*meter);
    printf("\n bmi is %f \n",bmi);

    if(bmi<18.5)
    {
        printf("you are underweight");
    }
    else if(bmi>=18.5 && bmi<25)
    {
        printf("you are normal weight");
    }
    else if(bmi>=25 && bmi<30)
    {
        printf("You are overwieght");
    }
    else if(bmi>=30 && bmi<35)
    {
        printf("You are obsese class 1");
    }
    else
    {
        printf("your are obsese class 2");
    }
    printf("\nGoodbyee..");
}