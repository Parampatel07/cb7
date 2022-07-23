// write a program to print following pattern
// 1 8 27 64 .... 10000
#include <stdio.h>
void main()
{
    int number = 1, answer;

    for(number=0;number<10;number++)
    {
        answer = number * number * number;
        printf("%d ", answer);
    }
    
}