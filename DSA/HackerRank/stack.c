#include<stdio.h>      
#include<stdlib.h>     
#include"MyStack.h"
int main()
{   char str[100],rev[100];
    int i;
    STK*s;
    s=(STK*)malloc(size of(STK));
    if(s==NULL) exit(0);
    init(s);
    printf("Enter the string:"); gets(str);
    for(i=0;i<strlen(str);i++)
    {
        push(s,str[i]);
    }
    i=0;
    while(id Empty(s)==0)
    { 
        rev[i]=peek(s);       pop(s);   i++;
    }  
    rev[i]='\0';
    printf("The reversed string:%s",rev);
    free(s);
    return 0;
}