#include<stdio.h>
#include<math.h>
int main()
{
    int i,x,y,tc;
    scanf("%d",&tc);
    for(i=0;i<tc;i++)
    {
        scanf("%d%d",&x,&y);
        printf("%d\n",x+y);
    }
    return 0;
}