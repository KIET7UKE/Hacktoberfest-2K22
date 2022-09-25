#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
    {
	    int X,Y,ans =0, count=0, maxdays =0;
        cin >> X >> Y;
        string str;
        cin >> str;
        for(int i=0; i<30; i++)
        {
            if(str[i]== '1')
            {
                ans +=X;
                count++;
            }
            else
            {
                maxdays = max(count, maxdays);
                count =0;
            }
        }

        maxdays = max(count, maxdays);

        ans += maxdays * Y;

        cout << ans << "\n";
        
    }
    return 0;
}