#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    int ans=1;
    sort(arr.begin(),arr.end());
    int temp=1;
    for(int i=1;i<n;i++)
    {
        //int temp=1;
        if(arr[i]==arr[i-1])
        continue;

        if(arr[i]==arr[i-1]+1)
        temp++;
        else
        temp=1;

        ans=max(ans,temp);
    }
    return ans;
}
