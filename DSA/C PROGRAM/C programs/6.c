#include<stdio.h>
int main()
{
    int marks;
    printf("enter the secured mark:");
    scanf("%d",&marks);

    if(marks>=75)
    {
        printf("DISTINCTION");
    }
    else if(marks>=60 && marks<75)
    {
        printf("FIRST DIVISION");
    }
    else if(marks>=50 && marks<60)
    {
        printf("SECOND DIVISION");
    }
    else if(marks>=40 && marks<50)
    {
        printf("THIRD DIVISION");
    }
    else
    {
        printf("FAIL!");
    }
    return 0;
}