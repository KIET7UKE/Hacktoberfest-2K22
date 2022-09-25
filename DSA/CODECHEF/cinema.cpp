#include <string>
#include <stdio.h>

int main() {
            int a[]={1,2,3,4,5};
                  int i, sum =0, *b=a;
                         for(i=4;i>-1;i--){
                                     sum=sum+(*b+i)+*(b+i);
                        }
             printf("%d\n",sum);
       return 0; 
}