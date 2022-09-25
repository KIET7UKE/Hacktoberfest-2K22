class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        long long rev =0, n =x;
        
        while(x)
        {
            rev = rev*10 + x%10;
            x/=10;
        }
        if(rev>INT_MAX)
            return false;
        if(n==rev)
            return true;
        else
            return false;
    }
};
