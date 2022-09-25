#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,count =0,s =100,rating=0;
        cin >> n;
        int a[n],min;
        for(int i=0; i<n ;i++)
        {
            cin >> a[i];
            count++;
        }
        min = a[0];
        // for(int i=1; i<n ;i++)
        // {
        //     if(a[i] < min)
        //     min = a[i];
        //     else if (a[i] > min)
        //     min +=0; 
        // }
        while(n>2)
        {
        for(int i=1; i<n ;i++)
        {
            if(a[i] < min)
            rating = a[i]/n;
            else if (a[i] > min)
            min+=0; 
        }   
        cout << rating;

        }
        


    }
    return 0;
}