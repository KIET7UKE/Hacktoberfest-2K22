#include<stdio.h>
int main()
{
    char ch;
    printf("enter a charecter");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {
        printf("UPPER CASE");
    }
    else if(ch>='a' && ch<='z')
    {
        printf("LOWER CASE");
    }
    else if(ch>=48 && ch<=97)
    {
        printf("DIGIT");
    }
    return 0;
}