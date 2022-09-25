#include<stdio.h>
#include<string.h>
int main()
{
    int n,i=0;
    char x,str1[100],str2[100];
    scanf("%d",&n);
    if(i<n)
    {
        scanf("%s",str1);
        i++;
    }
    else
    printf("error");
    x=strlen(str1);
    printf("%d",x);
    return 0;
}