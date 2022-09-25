#include<stdio.h>
int main()
{
    int math, phy, chem, hindi, eng,tm,p,tp,total;
    printf("Enter marks obtained in math: ");
    scanf("%d",&math);
    printf("Enter marks obtained in phy: ");
    scanf("%d",&phy);
    printf("Enter marks obtained in chem: ");
    scanf("%d",&chem);
    printf("Enter marks obtained in hindi: ");
    scanf("%d",&hindi);
    printf("Enter marks obtained in eng: ");
    scanf("%d",&eng);

    tm = math+phy+chem+hindi+eng;
    printf("%d\n",tm);
    p = tm/500;
    total = p*100;
    printf("%d",total);
    return 0;
}