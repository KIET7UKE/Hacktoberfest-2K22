#include <iostream>
using namespace std;
 
// function to print the divisors
void printDivisors(int n)
{
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            cout <<" " << i;
}

int countDigit(long long N)
{
    int count = 0;
    while (N != 0)
    {
        N = N / 10;
        ++count;
    }
    return count;
}
 
/* Driver program to test above function */
int main()
{
    int n,count,N;
    cin >> n;
    cout << countDigit(N);
    printDivisors(n);
    return 0;
}