class Solution {
public:
    void sortColors(vector<int>& nums) {
       int i = 0;
        int j = 0;
        int k = nums.size()-1;
        
        while(j<nums.size() && k>=j){
            if (nums[j]==0){
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
            else if (nums[j]==2){
                swap(nums[j],nums[k]);
                k--;
            }
            else{
                j++;
            }
        }  
    }
};
