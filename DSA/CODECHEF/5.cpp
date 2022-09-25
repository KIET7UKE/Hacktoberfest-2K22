#include<bits/stdc++.h>
using namespace std;
int count(string s, char c)
{
    // Count variable
    int res = 0;
 
    for (int i=0;i<s.length();i++)
 
        // checking character in string
        if (s[i] == c)
            res++;
 
    return res;
}

int main()
{
    string str;
    int t;
    cin >> t;
    cin >> str;
    char c = 'a';
    char d = 'b';
    int ansa = count(str,c);
    int ansb = count(str,d);
    
    cout << min(ansa,ansb) << endl; 

    return 0;
}