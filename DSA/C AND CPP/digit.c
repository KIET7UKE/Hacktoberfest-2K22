#include<stdio.h>
int main(){
    int t, n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int ans=0;
        while(n>=1)
        {
            ans = ans+n%10;
            n/=10;
        }
        printf("%d \n",ans);
    }
    return 0;
}