#include<bits/stdc++.h>
using namespace std;
void lcs(string s1,string s2,int m,int n)
{
	int i,j,l[m+1][n+1];
	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(i==0||j==0)
			{
				l[i][j]=0;
			}
			else if(s1[i-1]==s2[j-1])
			{
				l[i][j]=l[i-1][j-1]+1;
			}
			else
			{
					l[i][j]=max(l[i-1][j],l[i][j-1]);
			}
		}
	}
	
	
	
	int index = l[m][n]; 
  
   // Create a character array to store the lcs string 
   char lcs[index+1]; 
   lcs[index] = '\0'; // Set the terminating character 
  
   // Start from the right-most-bottom-most corner and 
   // one by one store characters in lcs[] 

   while (i > 0 && j > 0) 
   { 
      // If current character in X[] and Y are same, then 
      // current character is part of LCS 
      if (s1[i-1] == s2[j-1]) 
      { 
          lcs[index-1] = s1[i-1]; // Put current character in result 
          i--; j--; index--;     // reduce values of i, j and index 
      } 
  
      // If not same, then find the larger of two and 
      // go in the direction of larger value 
      else if (l[i-1][j] > l[i][j-1]) 
         i--; 
      else
         j--; 
   } 
   cout<<"hi";
  
   // Print the lcs 
   cout << "LCS of " << s1 << " and " << s2 << " is " << lcs;
	
	
	
	
	
	
	
	
	
	
	
	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s1,s2;
		cin>>s1;
		cin>>s2;
		lcs(s1,s2,s1.length(),s2.length());
	;
	}
	return 0;
}
