// -->write a program to print following series (Lucas series)
// 2, 1, 3, 4, 7, 11, 18, 29, 47, 76, 123 .... 322
#include <stdio.h>
void main()
{
    int first = 2, second = 1, answer;
    printf("%d ", first);
    printf("%d ", second);
    answer = first + second;
    printf("%d ", answer);
    while(answer<300)
    {
        first = answer;
        answer = second + answer;
        printf("%d ", answer);
        second = answer;
        answer = first + answer;
        printf("%d ", answer);
    }
}