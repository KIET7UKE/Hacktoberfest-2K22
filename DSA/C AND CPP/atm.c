#include<stdio.h>
int main()
{
    int x;
    float y,cb; 
    scanf("%d %f",&x,&y);
    if(x%5==0 && x<= y-0.50){
        cb=(y-x)-0.5;
        printf("%.2f",cb);
    }
    else{
        printf("%.2f",y);
    }
return 0;
}

