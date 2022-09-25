#include<stdio.h>
int main()
{
    int rm,x,y,i,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&x,&y);
        if(x<y)
        {
            rm=x%y;
            printf("%d\n",rm);
        }
        else
        {
            rm=x%y;
            printf("%d\n",rm);
        }
    }
}