class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length(), maxs =0;
       string ans;
        vector<vector<bool>> P(n, vector<bool>(n, false));
        for(int i =0;i<n;i++)
        {
            P[i][i] =true;
            if(i==n-1) break;
            if(s[i]==s[i+1]) P[i][i+1]=true;
        }
        
        for(int i =n-3;i>=0;i--)
        {
            for(int j =i+2;j<n;j++)
            {
                if(P[i+1][j-1] && s[i]==s[j])
                    P[i][j] =true;    
            }
        }
         int max = 0;
        string maxstr = "";
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(P[i][j]==true and j-i+1>max){
                    max = j-i+1;
                    maxstr = s.substr(i,j-i+1);
                }
            }
        }
        return maxstr;
    
    }
};
