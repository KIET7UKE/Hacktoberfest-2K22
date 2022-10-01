#include<stdio.h>
int main(){
    int n,k,a,count=0;
    scanf("%d %d",&n,&k);
    while(n--){
        scanf("%d",&a);
        if(a%k==0){
            count++;
        }
    }
    printf("%d",count);
    return 0;

}
