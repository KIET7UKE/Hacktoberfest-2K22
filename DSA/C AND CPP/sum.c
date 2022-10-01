#include<stdio.h>
int main(){
    int t,x,y,sum=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&x,&y);
        sum = x + y;
        printf("%d\n",sum);
    }
    return 0;
}