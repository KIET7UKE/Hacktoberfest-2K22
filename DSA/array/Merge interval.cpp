class Solution {
public:
    
    //         gaarvit sahu goldy sahu  princu badmas hain bhoot masti krta hain baath nahi manta hain 
    //method 1
        //time complexity O(Nlog(N))
        //space complexity O(N)
//          vector<vector<int>> ans;
//         int n=in.size();
//         stack<pair<int,int>> st;
//         sort(in.begin(),in.end());
//         st.push({in[0][0],in[0][1]});
//         for(int i=1;i<n;i++)
//         {
//             int st1=st.top().first;
            
//             int end1=st.top().second;
//             int st2=in[i][0];
//             int end2=in[i][1];
//             if(end1<st2)
//             {
//                 st.push({st2,end2});
//             }
//             else
//             {
//                 st.pop();
//                 end1=max(end1,end2);
//                 st.push({st1,end1});
//             }
//         }
//         while(!st.empty())
//         {
//             ans.push_back({st.top().first,st.top().second});
//             st.pop();
//         }
//         return ans;
        
    
    
    vector<vector<int>> merge(vector<vector<int>>& in) {
        //method 2
        //time complexity O(Nlog(N))
        //space complexity O(1)
    int n=in.size();
    sort(in.begin(), in.end());
    int index = 0;  
    for (int i=1; i<n; i++)
    {
        
        if (in[index][1] >=  in[i][0])
        {
               // Merge previous and current Intervals
            in[index][1] = max(in[index][1], in[i][1]);
            in[index][0] = min(in[index][0], in[i][0]);
        }
        else {
            index++;
            in[index] = in[i];
        }   
    }
     vector<vector<int>>  ans;
    for (int i = 0; i <= index; i++)
    {
        vector<int> v;
        v.push_back(in[i][0]);
            
        v.push_back(in[i][1]);
        ans.push_back(v);
    }
        return ans;
       
        
        
    }
};
