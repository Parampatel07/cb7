// write a programe to store 3 student marks,name,weight using struct
#include<stdio.h>
struct student
{
    char name[25];
    float weight;
    int marks;
}s2,s3;
void main()
{
    struct student s1;
    
    printf("Enter name of first student");
    scanf("%s",&s1.name);
    printf("Enter marks of first student");
    scanf("%d",&s1.marks);
    printf("Enter weight of first student");
    scanf("%f",&s1.weight);

    printf("Enter name of second student");
    scanf("%s",&s2.name);
    printf("Enter marks of second student");
    scanf("%d",&s2.marks);
    printf("Enter wieght of second student");
    scanf("%f",&s2.weight);
    
    printf("Enter name of third student");
    scanf("%s",&s3.name);
    printf("Enter marks of third  student");
    scanf("%d",&s3.marks);
    printf("Enter wieght of third  student");
    scanf("%f",&s3.weight);
    
    printf("\nthe name of first student is %s and weight is %f and marks are %d",s1.name,s1.weight,s1.marks);
    printf("\nthe name of second student is %s and weight is %f and marks are %d",s2.name,s2.weight,s2.marks);
    printf("\nthe name of third student is %s and weight is %f and marks are %d",s3.name,s3.weight,s3.marks);
}