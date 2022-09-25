class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        //method 1
        // vector<int> left(n);
        // vector<int> right(n);
        // int mx=0;
        // for(int i=0;i<n;i++)
        // {
        //     mx=max(height[i],mx);
        //     left[i]=mx;
        // }
        // mx=0;
        // for(int i=n-1;i>=0;i--)
        // {
        //     mx=max(height[i],mx);
        //     right[i]=mx;            
        // }
        // long sum=0;
        // for(int i=0;i<n;i++)
        // {
        //     sum+=min(left[i],right[i])-height[i];
        // }
        //method 2
        int sum=0;
        int low=0,high=n-1,mi=0,ma=0;
        while(low<=high)
        {
            if(height[low]<height[high])
            {
                if(height[low]>mi)
                {
                    mi=height[low];
                }
                else
                {
                    sum=sum+mi-height[low];
                }
                low++;
            }
            else
            {
                if(height[high]>ma)
                {
                    ma=height[high];
                }
                else
                {
                    sum=sum+ma-height[high];
                }
                high--;
            }
        }
        return sum;
        
    }
};
