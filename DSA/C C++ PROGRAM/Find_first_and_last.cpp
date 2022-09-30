class Solution {
public:
    int binarySearch(vector<int>& arr, int x,bool check,int l,int r)
    {
    int ans=-1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
        {
            ans=m;
            if(check)
                r=m-1;
            else
                l=m+1;
        }
        if (arr[m] < x)
            l = m + 1;
        else if(arr[m]>x)
            r = m - 1;
    }
    return ans;
  
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> pos;
        int r=nums.size()-1;
        pos ={binarySearch(nums,target,true,0,r),binarySearch(nums,target,false,0,r)};
        return pos;
    }
   
};
