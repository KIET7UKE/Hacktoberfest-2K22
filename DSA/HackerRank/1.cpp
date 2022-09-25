#include<iostream>
using namespace std;

int main()
{
	int n,p,r=1;
	cout<<"Enter the base number and exponent ";
	cin>>n>>p;

	for(int i=1;i<=p;i++)
		r=r*n;

	cout<<"Result :"<<r;


	return 0;
}