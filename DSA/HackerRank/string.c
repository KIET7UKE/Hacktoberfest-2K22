#include<stdio.h>
    #include<string.h>
    int main()
    {
    	int T;
    	scanf("%d",&T);
    	while(T--)
    	{
    		char str[100001];
    		scanf("%s",&str);
    		char a[]={'a','e','i','o','u'};
    		char b[]={'A','E','I','O','U'};
    		int i,j,l,ca=0,cb=0;
    		l = strlen(str);
    		for(i=0;i<5;i++)
    		{
    			for(j=0;j<l;j++)
    			{
    				if(a[i]==str[j])
    				{
    				ca++;
    				break;
    				}
    			}
    		}
    		for(i=0;i<5;i++)
    		{
    			for(j=0;j<l;j++)
    			{
    				if(b[i]==str[j])
    				{
    				cb++;
    				break;
    				}
    			}
    		}
    		if(ca==5 || cb==5)
    		printf("lovely string\n");
    		else printf("ugly string\n");
    	}
    }