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
		    int i=0,j=1;
			while(1)
			{
				while(ar[i]>0&&i%2==0)
				i+=2;
				while(ar[j]<0&&i%2==1)
				j+=2;
				if(i>=n||j>=n)
				break;
				swap(ar[j],ar[i]);
			}
	
		
	}
	else//when number of odd is smaller  half of total element
	{
			int i=0,j=1;
			while(1)
			{
				while(ar[i]<0&&i%2==0)
				i+=2;
				while(ar[j]>0&&i%2==1)
				j+=2;
				if(i>=n||j>=n)
				break;
				swap(ar[j],ar[i]);
			}
	
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<ar[i]<<" ";
	}
}
