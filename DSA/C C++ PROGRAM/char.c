#include <stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    char *final,l;
    int i,count=0,k,j=0;
    scanf("%[^\n]s",str);
    for(i=0;str[i]!='\0';i++)
    {
        if (str[i] == ' ' && str[i+1] != ' ')
        count++;
    }
    printf("Hello, World.\n");
    k = count+1;
    if(j<k)
    printf("%s",str);
    else
    printf("Try Again");
    return 0;
}