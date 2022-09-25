#include<stdio.h>
#include<string.h>
int main()
{
    int n,number;
    char str[100];
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Enter a string: ");
    scanf("%s",str);
    
    number = n*2;
    printf("%d\n",number);
    printf("%s",str);
    return 0;
}