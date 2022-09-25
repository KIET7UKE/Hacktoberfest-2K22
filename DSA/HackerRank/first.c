#include<stdio.h>
int main()
{
    int  a[20], b[20], n, small=0, large=0, i, spos, lpos, temp;
    printf("Enter the Numbers of terms:");
    scanf("%d",& n);
    printf("\n Enter the terms : \n");
    for (i = 1; i<= n; i++)
    {
        scanf("%d",& a[i]);
        b[i] = a[i];
    }
    small = a[1];
    for (i = 1;i <= n; i++)
    {
        if (a[i] <= small)
        {
            small = a[i];
            spos = i;
        }
        if (large <= a[i])
        {
            large = a[i];
            lpos = i;
    }   }
    temp = a[spos];
    a[spos] = a[lpos];
    a[lpos] = temp;

    printf("\n The Array enter by user are :\n");
    for (i = 1; i<= n; i++)
    printf("%d\t",b[i]);

    printf("\n The Array after interchanging the largenst and smallest element :\n");
    for (i = 1; i<= n; i++)
    printf("%d\t",a[i]);
    return (0);
}