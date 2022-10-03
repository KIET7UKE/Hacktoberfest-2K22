#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n,arr[10000],arr_rev[10000],i;
  scanf("%d",&n);
  for(i = 0;i < n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i = 0;i < n;i++)
  {
    arr_rev[i] = arr[n-i-1];
  }
  for(i = 0;i < n;i++)
  {
    printf("%d ",arr_rev[i]);
  }
  return 0;
}
