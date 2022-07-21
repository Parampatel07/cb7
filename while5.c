// write a programe to find power and exponent
#include <stdio.h>
void main()
{
    int base, power, answer = 0, count = 0;

    printf("Enter value for base");
    scanf("%d", &base);

    printf("Enter value for power");
    scanf("%d", &power);
    answer = base * base;
    count = count + 2;
    while(count<power)
    {
        answer = answer * base;
        count = count + 1;
    }
    printf("%d ", answer);
}