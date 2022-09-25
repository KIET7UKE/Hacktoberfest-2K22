#include <bits/stdc++.h>
using namespace std;
int check_anagram(string s1, string s2);
int main()
{
int n;
string s1,s2;
cout <<"\nEnter two strings : ";
cin>>s1;
cin>>s2;
if(check_anagram(s1,s2))
    printf("\nYes\n");
else
    printf("\nNo\n");
return 0;
}

    int check_anagram(string s1,string s2)
    {
    int a1[26]={0}, a2[26]={0};

    if(s1.length()!=s2.length())
    return 0;

    for(int i=0; s1[i]!='\0'; i++)
    {
        a1[s1[i]-'a']++;
    }

    for(int i=0; s2[i]!='\0'; i++)
    {
        a2[s2[i]-'a']++;
    }

    for(int i=0; i<26; i++)
    {
        if(a1[i] != a2[i])
    return 0;
    }
    return 1;
}