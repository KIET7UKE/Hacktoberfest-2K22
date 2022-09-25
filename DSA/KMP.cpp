#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

void create_lps(string pat, int *lps)
{
    int m = pat.size();

    for (int i = 1; i < m; i++)
    {
        int j = lps[i - 1]; // j is index from where we should look for matching prefix and suffix
        while (j > 0 and pat[i] != pat[j])
            j = lps[j - 1];

        if (pat[i] == pat[j])
            j++;
        lps[i] = j;
    }
}
vector<int> kmp(string text, string pat)
{
    vector<int> ans;
    //algorithm to find occurences of pattern in given string;
    int n = text.size(), m = pat.size();
    int lps[m] = {0};
    create_lps(pat, lps);

    int i = 0, j = 0;
    while (i < n)
    {

        if (text[i] == pat[j])
        {
            i++, j++;
        }
        if (j == m)
        {
            ans.push_back(i - j);
            j = lps[j - 1];
        }
        else if (i < n and text[i] != pat[j])
        {
            if (j != 0)
                j = lps[j - 1];
            else
                i++;
        }
    }
    return ans;
}

int main()
{
    int t = 1;
    //cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string text, pat;
        cin >> pat >> text;
        vector<int> ans = kmp(text, pat);
        if (ans.empty())
            cout << "\n";
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << "\n";
    }
}