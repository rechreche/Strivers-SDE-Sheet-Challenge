#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	//int ans=0;
	unordered_map<int,int> mp;
	for(int i=0;i<n;i++)
	mp[arr[i]]++;

	for(auto el:mp)
	if(el.second > n/2)
	return el.first;

	return -1;
}
