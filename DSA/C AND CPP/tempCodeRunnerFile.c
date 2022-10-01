#include<stdio.h>
int main(){
    int t, n,ans=0,sum=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        while(n>0){
            ans = n%10;
            sum = sum+ans;
            n=n/10;
        }
        printf("%d",sum);
    }
    return 0;
}