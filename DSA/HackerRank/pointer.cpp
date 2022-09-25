#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,A,B,C;
    cin>>a>>b;
    A = a+b;
    B = (a-b);
    if(a>b)
    {
        cout<<A<<endl;
        cout<<B;
    }
    else
    {
        cout<<A<<endl;
        cout<<-B;
    }
    return 0;
}