class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
     for(int i=0;i<nums.size();i++)
     {
         nums[nums[i]%n]=nums[nums[i]%n]+n;
     }
        int ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]/n>1)
            {
                ans=i;
                break;
            }
        }
        return ans;
        
    }
};
