#include <bits/stdc++.h>
using namespace std;
#define maxN 200006
#define ll long long int
#define MOD (ll)1000000007
#define in long long int
#define mod (ll)1000000007

void Solve()
{
  
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    ll med = 0;
    ll idx = 0;
    if (n & 1)
    {
        idx = ((n + 1) / 2) - 1;
    }
    else
    {
        idx = ((n) / 2) - 1;
    }
    med = v[idx];
    ll sum = 0;
    ll num = 0;
    for (ll i = 0; i < n; i++)
    {
        sum += (v[i] - med);
        num += (v[i]);
    }
    // cout<<med<<" "<<sum<<endl;
    if (sum <= 0)
    {
        cout << abs(sum) << endl;
        return;
    }

    ll low = 0, high = 1e9;
    ll ans = LLONG_MAX;
    while (low <= high)
    {

        ll mid = (low + high) >> 1;
        ll x = 0;
        sum = 0;
        for (ll i = idx; i < n; i++)
        {
            x += max(0LL, mid - v[i]);
        }
        sum += x;
        for (ll i = 0; i < n; i++)
        {
            sum += (v[i] - mid);
            if (sum >= 1e18 || sum <= -1e18)
            {
                break;
            }
        }

        // cout<<mid<<" "<<x<<endl;
        if (sum > 0)
        {
            low = mid + 1;
        }
        else
        {
            ans = min(ans, x + abs(sum));
            high = mid - 1;
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // fun();
    // sieve(100005);
    ll test;
    cin >> test;
    while (test--)
        Solve();
}