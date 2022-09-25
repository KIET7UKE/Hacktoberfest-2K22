#include<bits/stdc++.h>
using namespace std;
//brute force sort the element and calculate number of positive and negative then arrange them
int main()
{
	int n;
	cin>>n;
	int ar[n];
	int c=0;
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
		if(ar[i]<0)
		c++;
	}
	if(c<=n/2)//when number of even is greater or equal to half of total element
	{
		for(int i=0;i<n;i++)
		{
			//case 1 when we want positve value at even places i.e 0 2 4
			if(ar[i]>0&&i%2==0)
			{
				continue;	
			}
			//case 2 when we want negative value at even places i.e 1 3 5
			else if(ar[i]<0&&i%2==1)
			{
				continue;	
			}
			else if(ar[i]<0&&i%2==0)
			{
				int temp=i;
				int j=i;
				while(j<n&&ar[j]<=0)
				{
					j++;
				}
				if(j<n)
				swap(ar[j],ar[temp]);
			}
			else if(ar[i]>0&&i%2==1)
			{
				
				int temp=i;
				int j=i;
				while(j<n&&ar[j]>=0)
				{
					j++;
				}
				if(j<n)
				swap(ar[j],ar[temp]);
			}
		}

		
	}
	else//when number of odd is smaller  half of total element
	{
			int j=0;
		for(int i=0;i<n;i++)
		{
			//case 1 when we want negative value at even places i.e 0 2 4
			if(ar[i]<0&&i%2==0)
			{
				continue;	
			}
			//case 2 when we want negative value at even places i.e 1 3 5
			else if(ar[i]>0&&i%2==1)
			{
				continue;	
			}
			else if(ar[i]>0&&i%2==0)
			{
				int temp=i;
				int j=i;
				while(j<n&&ar[j]>=0)
				{
					j++;
				}
				if(j<n)
				swap(ar[j],ar[temp]);
			}
			else if(ar[i]<0&&i%2==1)
			{
				int temp=i;
				int j=i;
				while(j<n&&ar[j]<=0)
				{
					j++;
				}
				if(j<n)
				swap(ar[j],ar[temp]);
			}
		}
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<ar[i]<<" ";
	}
}
