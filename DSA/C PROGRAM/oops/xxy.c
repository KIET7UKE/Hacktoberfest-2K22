#include<stdio.h>
#include<string.h>
int main()
{
    int n,i=0,count=0;
    char str[100];

      scanf("%s",str);

    for(i=0;str[i]!="\0";i++)
    {
        if(str[i] == "A" || str[i] == "E" || str[i] == "I" || str[i] == "O" || str[i] == "U" || str[i] == "a" || str[i] == "e" || str[i] == "i" || str[i] == "o" || str[i] == "u")
        {
            count++;
        }
            
    }
        if(count==5)
        {
            printf("lovely string");
        }
        else
        {
            printf("ugly string");
        }
    
    return 0;

}