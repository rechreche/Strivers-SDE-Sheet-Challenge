#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	unordered_map<int,int> mp;

	for(int i=0;i<n;i++)
	{
		mp[arr[i]]++;
	}
	for(auto el:mp)
	{
		if(el.second>1)
		return el.first;
	}
}
