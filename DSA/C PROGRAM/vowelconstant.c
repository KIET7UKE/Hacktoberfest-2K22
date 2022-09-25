#include<stdio.h>
int main()
{
    char ch;
    printf("enter a charecter:");
    scanf("%c",&ch);
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("ENTERED CHARECTER IS VOWEL");
    
    }
    else
    {
        printf("ENTERED CHARECTER IS CONSTANT");
    }
    return 0;
}