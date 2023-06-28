#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    // vector<vector<int>> ans;
    // int start=0,end=0;
    // int flag=0;
    
    // int n=intervals.size();
    // for(int i=0;i<n-1;i++)
    // {
    //     if(flag==0)
    //     start=intervals[i][0];

    //     if(intervals[i][i] >= intervals[i+1][0])
    //     {
    //         flag=1;

    //     }
    //     else
    //     {
    //         end=intervals[i][1];
    //         flag=0;
    //         ans.push_back({start,end});
    //     }
    // }
    // if(flag)
    // ans.push_back({intervals[n-1][0],intervals[n-1][1]});
    // if(intervals[n-1][0])
    // return ans;
    sort(intervals.begin(),intervals.end());

    int n=intervals.size();

    if(n<=1) return intervals;

    vector<vector<int>> ans;

    ans.push_back(intervals[0]);

    for(int i=1;i<n;i++){

        if(intervals[i][0]<=ans.back()[1]){

            ans.back()[1]=max(ans.back()[1],intervals[i][1]);

        }

        else ans.push_back(intervals[i]);

    }

    return ans;
}
