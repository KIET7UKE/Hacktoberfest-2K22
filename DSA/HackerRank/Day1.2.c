#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
        int n,fd,fn,j=0;
        float ffd;
        char str1[100];
        char s[20];
        scanf("%d",&n);
        fn=n+i;
        printf("%d\n",fn);
        scanf("%if",&fd);
        ffd=fd+d;
        printf("%f\n",ffd);
        scanf("%s",s);
        printf("HackerRank %s",s); 

    return 0;
}