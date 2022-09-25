class Solution {
public:
    void insert(vector<int> &nums,int k)
    {
        if(nums.size()==0||nums.back()<k)
        {
            nums.push_back(k);
            return;
        }
        int temp=nums.back();
        nums.pop_back();
        insert(nums,k);
        nums.push_back(temp);
    }
    
    void sort(vector<int>&nums)
    {
        if(nums.size()==0)
            return;
        int temp=nums[nums.size()-1];
        nums.pop_back();
        sort(nums);
        insert(nums,temp);
    }
    vector<int> sortArray(vector<int>& nums) {
        sort(nums);
        return nums;
    }
};
