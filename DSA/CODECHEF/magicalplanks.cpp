#include <bits/stdc++.h>
#define ll long long
#define f(n) for(ll i=0;i<n;i++)
#define vl vector<ll>
#define pb push_back
#define mk make_pair
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define nl "\n"
#define inte long long int
#define IOS ios_base::sync_with_stdio(false);

 
#include <iostream>
using namespace std;



// void SieveOfEratosthenes(int n)
// {
//     bool prime[n + 1];
//     memset(prime, true, sizeof(prime));
 
//     for (int p = 2; p * p <= n; p++)
//     {
//         if (prime[p] == true)
//         {
//             for (int i = p * p; i <= n; i += p)
//                 prime[i] = false;
//         }
//     }
 
//     // Print all prime numbers
//     for (int p = 2; p <= n; p++)
//         if (prime[p])
//             cout << p << " ";
// }


void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]!=s[i+1])
        {
            count++;
        }
    }

    cout<<(count+1)/2<<nl;
}

   
void init_code()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
 
 
int main()
{
    init_code();
   IOS
   cin.tie(NULL);
   cout.tie(NULL);
   ll t;
   cin>>t;

   //t=1;
   while(t--)
   {
      solve();
   }
   return 0;
}