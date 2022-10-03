#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int i,j,count;
    char string[10000];
    gets(string);
    int length = strlen(string);
    for(j = 48;j <= 57;j++)
    {
      count = 0;
      for(i = 0;i < length;i++)
      {
        if(j == string[i])
        {
          count++;
        }
      }
      printf("%d ",count);
    }
    return 0;
}
