#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],substr[1000000];
    int n,i=0,j,flag=0,len1,len2;
    gets(str);
    scanf("%d",&n);
    while(i<n)
    {
        scanf("%s",substr);
        i++;
    }
    len1=strlen(str);
    len2=strlen(substr);

    for(i=0;i<=len1-len2;i++)
    {
        for(j=i;j<i+len2;j++)
        {
            flag=1;
            if(str[j]!=substr[j-1])
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        break;
    }
    if(flag==1)
    {
        printf("POSITIVE\n");
    }
    else
    {
        printf("NEGATIVE\n");
    }
    return 0;

}