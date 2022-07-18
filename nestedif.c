// write a programme to find largest triangle of given three triangle take input from user
#include <stdio.h>
void main()
{
    int height1, base1, height2, base2, height3, base3, area1, area2, area3;

    printf("Enter value for height 1  ");
    scanf("%d", &height1);
    printf("Enter value for base 1  ");
    scanf("%d", &base1);

    printf("Enter value for height 2  ");
    scanf("%d", &height2);
    printf("Enter value for base 2  ");
    scanf("%d", &base2);

    printf("Enter value for height 3  ");
    scanf("%d", &height3);
    printf("Enter value for base 3  ");
    scanf("%d", &base3);

    area1 = height1 * base1 / 2;
    area2 = height2 * base2 / 2;
    area3 = height3 * base3 / 2;
    printf("\nArea 1 is %d ", area1);
    printf("\nArea 2 is %d ", area2);
    printf("\nArea 3 is %d ", area3);

    if (area1 == area2 && area2 == area3)
    {
        printf("All are same");
    }
    else
    {
        if (area1 > area2)
        {
            if (area1 > area3)
            {
                printf("\nArea 1 is greater than all");
            }
            else
            {
                printf("\nArea 3 is greater than all");
            }
        }
        else
        {
            if (area2 > area3)
            {
                printf("\nArea 2 is greater than all");
            }
            else
            {
                printf("\nArea 3 is greater than all");
            }
        }
    }
}