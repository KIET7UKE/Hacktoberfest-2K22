#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int i =4;
    double d =4.0;
    char *str1;
    int n;
    double t;
    char s1[10000];
    scanf("%d",&n);
    scanf("%f",&t);
    scanf("%s",s1);
    printf("%d\n",n+i);
    printf("%f\n",t+d);   
    printf("%s",s1);    
    return 0;
}