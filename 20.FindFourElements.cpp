#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
    vector<int> ans;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-1;i++)
    {
        if(arr[i-1]==arr[i] && i>0)
        continue;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j-1]==arr[j] && j>i+1)
            continue;
            int k=j+1;
            int l=n-1;
            while(k<l)
            {
                int sum=arr[i];
                sum+=arr[j];
                sum+=arr[k];
                sum+=arr[l];
                while(k<l && arr[k]==arr[k-1]) k++;
                while(k<l && arr[l]==arr[l+1]) l--;
                if(sum==target)
                {
                    
                    ans.push_back(1);
                    break;
                }
                else if(sum>target)
                l--;
                else
                k++;
            }
        }
    }
    if(ans.size() == 0)
    return "No";
    else
    return "Yes";
}
