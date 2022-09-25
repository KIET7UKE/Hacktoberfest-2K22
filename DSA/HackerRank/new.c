#include<stdio.h>
#include<stdlib.h>
#define max_size 100
typedef struct stack
{
    char Data[max_size];
    int Top;
}STK;
int isEmpty(STK *s)
{
    if(s->Top==-1)
        return 1;
        else
           return 0;
}
int isFull(STK*s)
{
    if(s->Top==max_size-1)
        return 1;
    else
        return 0;
}
void push (STK*s,char ele)
{
    if(isFull(s)==1)
      printf("Stack Overflow.It id full");
    else
    {
        s->Top=s->Top=1;
        s->Data[s->Top]=ele;
    }
}
