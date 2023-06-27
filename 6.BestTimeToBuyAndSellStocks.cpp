#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int ans=0;
    int buy=prices[0],sell=prices[1];
    ans=sell-buy;
    for(int i=0;i<prices.size();i++)
    {
        // buy=prices[i];
        // for(int j=i;j<prices.size();j++)
        // {
        //     sell=prices[j];
        //     ans=max(ans,sell-buy);
        // }
        ans=max(ans,prices[i]-buy);
        buy=min(buy,prices[i]);
        
    }
    return ans;
}
