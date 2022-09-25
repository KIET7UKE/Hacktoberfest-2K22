class Solution {
public:
    string reorganizeString(string s) {
         map<int,int> mp;
        string ans="";
        int n=s.length();
        if(s.length()==1)
            return s;
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
        if(mp.size()==1)
            return "";
        for(auto it:mp)
        {
            pq.push({it.second,it.first});
        }
        while(pq.size()>1)
        {
            auto top1=pq.top();
                pq.pop();
            auto top2=pq.top();
                pq.pop();
            ans+=top1.second;
            ans+=top2.second;
            if(--top1.first>0)
            {
                pq.push(top1);
            }
             if(--top2.first>0)
            {
                pq.push(top2);
            }
            
        }
        if(pq.size())
        {
            if(pq.top().first==1)
                ans+=pq.top().second;
            else
                return "";
        }
        return ans;
    }
};
