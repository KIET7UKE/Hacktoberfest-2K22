#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
  char arr[10000];
  int i,length;
  gets(arr);
  length = strlen(arr);
  for(i = 0;i < length;i++)
  {
    if(arr[i] == ' ')
    {
      printf("\n");
    }
    else
    {
      printf("%c",arr[i]);
    }
  }
  return 0;
}
