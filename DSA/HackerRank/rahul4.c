#include<stdio.h>
#include<stdlib.h>
void input(int a[],int n)
{
	int i;
	printf("Enter the array elements: \n");
	for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
}

void display(int a[],int n)
{
	int i;
	printf("Array elements are: \n");
	for(i=0;i<n;i++)
		{
			printf(" %d    ",a[i]);
		}
}
void search(int a[],int n)
{
	int item,i,found=0;
	printf("\nEnter the item to search in array:\n");
	scanf("%d",&item);
	for(i=0;i<n;i++)
		{
			if(item == a[i])
			{
                found ==1;
                break;
            }
        }
    if(found == 0)
    {
        printf("\n%d is found", item);
    }
    else
    {
        printf("\n%d is not found in the array", item);
    }    
}

void sum(int a[], int n)
{
	int s=0;
    float avg = 0;
	for(int i=0;i<n;i++)
	{
		s=s+a[i];

	}
    avg = s/n;
	printf("\n");
	printf("The sum of the element are: %d\n",s);
    printf("The average of the element are: %f\n",avg);
}

void max_min(int *a, int n)
{
	int max=0,min=9999;
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("\n");
	printf("Max: %d  Min: %d \n",max,min);
	printf("\n");
	
}
void interchange(int *a,int n)
{
		int max=0,min=9999;
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==max)
		{
			a[i]=min;
		}
		else if(a[i]==min)
		{
			a[i]=max;
		}
		
	}
	printf("Array elements after interchange  are:\n");
	for(int i=0;i<n;i++)
	{
		printf("  %d    ",a[i]);	
	}
	printf("\n");
	printf("\n");
}
void duplicate(int *a, int n)
{
	int h[100000]={0};
	for(int i=0;i<n;i++)
	{
		h[a[i]]++;
	}
	int max=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	for(int i=0;i<=max;i++)
	{
		if(h[i]>0)
		{
			printf("The elemnt is:  %d      its frequency:   %d\n",a[i]);
		}
	}
	printf("\n");
}

int main()
{
	int a[100];
	int i,n;
	printf("\nEnter the size of the array:\n");
	scanf("%d",&n);
	input(a,n);
	display(a,n);
    search(a,n);
	sum(a,n);
    max_min(a,n);
	interchange(a,n);
    duplicate(a,n);
    
	
	return(0);
}