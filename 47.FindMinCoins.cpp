#include <bits/stdc++.h> 
int findMinimumCoins(int amount) 
{
    // Write your code here
    vector<int> coins={1000,500,100,50,20,10,5,2,1};

    int ans=0;

    for(auto i:coins){

        ans+=(amount/i);

        amount%=i;

    }

    return ans;
}
