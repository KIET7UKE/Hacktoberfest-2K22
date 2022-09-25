#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;
        int A[N],c =0, p=0;
        for (int i=0; i<N; i++)
        {
            cin >> A[i];
        }
        for (int i=0; i<N; i++)
        {
            if(A[i] == A[i+1])
            c++;
            else if (A[i] > K)
            p++;
        }
        if(c == N)
        {
            cout << '1' << endl;
        }
        else
        {
            cout << p << endl;
        }
    }
    return 0;
}