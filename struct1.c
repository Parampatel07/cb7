//write a programe to take input of 3 countries time accpet hours in int minutes and second in float and countries first letter in char 
#include<stdio.h>
#include<stdlib.h>
struct time
{
    int hour;
    float minutes;
    char country;
}t2,t3;
void main()
{
    struct time t1;

    printf("Enter value for country 1\n");
    printf("Enter hours ");
    scanf("%d",&t1.hour);
    printf("Enter mintues and seconds");
    scanf("%f",&t1.minutes);
    fflush(stdin);
    printf("Enter first letter of your country ");
    scanf("%c",&t1.country);

    printf("Enter value for country 2\n");
    printf("Enter hours ");
    scanf("%d",&t2.hour);
    printf("Enter mintues and seconds");
    scanf("%f",&t2.minutes);
    fflush(stdin);
    printf("Enter first letter of your country ");
    scanf("%c",&t2.country);

    printf("The first letter of country is %c hours-minutes.second are %d-%f",t1.country,t1.hour,t1.minutes);
    printf("\nThe second letter of country is %c hours-minutes.second are %d-%f",t2.country,t2.hour,t2.minutes);
}