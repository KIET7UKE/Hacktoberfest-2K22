#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float p,q, discriminant,root1,root2,realpart,imagpart;
    printf("ENTER THREE NUMBERS:");
    scanf("%d%d%d",&a,&b,&c);
    discriminant = b*b-4*a*c;
    if(discriminant > 0)
        {
            root1=(-b+sqrt(discriminant))/(2*a);
            root1=(-b-sqrt(discriminant))/(2*a);
            printf("root1=%f and root2=%f",root1,root2);
        }
    else if(discriminant==0)
    {
        root1=root2=-b/(2*a);
        printf("root1=root2=%f",root1);
    }
    else
    {
        realpart=-b/(2*a);
        imagpart=sqrt(-discriminant)/(2*a);
        printf("root1=%f+%f and root2=%f-%f",realpart,imagpart,realpart,imagpart);
    }
    return 0;
    

}