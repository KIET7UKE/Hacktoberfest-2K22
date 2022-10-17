
// C++ program to check a number is a Happy number or not
//A number is called happy if it leads to 1 after a sequence of steps wherein each step number is replaced by the sum of squares of its digit that is if we start with Happy Number and keep replacing it with digits square sum, we reach 1. 

#include <bits/stdc++.h>
using namespace std;
bool isHappynumber(int n)
{
	if (n == 1 || n == 7)
		return true;
	int sum = n, x = n;

	while (sum > 9) {
		sum = 0;
	
		while (x > 0) {
			int d = x % 10;
			sum += d * d;
			x /= 10;
		}
		if (sum == 1)
			return true;
		x = sum;
	}
	if (sum == 7)
		return true;
	return false;
}

int main()
{
	int n ;
	cout<<"Enter a Number: ";
	cin>>n;

	if (isHappynumber(n))
		cout << n << " is a Happy number";
	else
		cout << n << " is not a Happy number";
	return 0;
}


