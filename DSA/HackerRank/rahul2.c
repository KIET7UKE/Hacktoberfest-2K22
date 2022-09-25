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


void sum(int *a, int n)
{
	int s=0;
	for(int i=0;i<n;i++)
	{
		s=s+a[i];
        s=s+a[i]/2;
	}
	printf("\n");
	printf("The sum of the element are: %d\n",s);
}

void avg(int a[], int n)
{
    int sum=0;
    int avg=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+a[i];
        sum=sum+a[i]/2;
	}
    int max=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
    avg=sum/max;
    printf("The average of the array are: %d",avg);
    
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
			printf("The elemnt is:  %d      its frequency:   %d\n",i,h[i]);
		}
	}
	printf("\n");
}
void search(int a[],int n)
{
	int item,i;
	printf("\nEnter the item to search in array:\n");
	scanf("%d",&item);
	for(i=0;i<n;i++)
		{
			if(item == a[i])
			{
			    printf("FOUND");
			    exit(0);
			}
		}
	printf("NOT FOUND");
}
int main()
{
	int a[100];
	int i,n;
	printf("\nEnter the size of the array:\n");
	scanf("%d",&n);
	input(a,n);
	display(a,n);
	sum(a,n);
    avg(a,n);
    max_min(a,n);
    duplicate(a,n);
    search(a,n);
	
	return(0);
}