//https://www.codingninjas.com/codestudio/problems/ninja-s-training_3621003?leftPanelTab=1
int ans(int day,int last,vector<vector<int>> &points,vector<vector<int>> &dp)
{
    if(dp[day][last]!=-1)
    {
        return dp[day][last];
    }
    if(day==0)
    {
        int maxi=0;
        for(int task=0;task<3;task++)
        {
            if(task!=last)
            {
                maxi=max(maxi,points[0][task]);
            }
        }
        return dp[day][last]=maxi;
    }
    int maxi=0;
    for(int task=0;task<3;task++)
    {
        if(task!=last)
        {
            int point = points[day][task]+ans(day-1,task,points,dp);
            maxi=max(maxi,point);
        }
    }
    return dp[day][last]=maxi;
}
int ninjaTraining(int n, vector<vector<int>> &points)
{
    vector<vector<int>>dp(n,vector<int>(4,-1));
    return ans(n-1,3,points,dp);
  // 0 ->0TH TASK DONE
  // 1 ->1ST TASK DONE
  // 2 ->2ND TASK DONE
  // 3->NO TASK DONE SO YOU CAN CHOOSE ANY ONE FROM THREE TASK THIS CASE WILL ONLY HAPPEN AT N-1TH POSTION THAT IS DAY WE ARE STARTING FROM
}
