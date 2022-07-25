// write a programe to find factorial
#include <stdio.h>
void main()
{
    int number, answer = 1;

    printf("Enter the number");
    scanf("%d", &number);
    // number = 5;    
    do
    {
        answer = answer * number;
        // printf("%d ", answer);
        number = number - 1;
    }while(number>0);
    printf("answer is %d ",answer);
}