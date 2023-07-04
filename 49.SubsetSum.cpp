void subsetSumHelper(int i, vector<int> &num, vector<int> &ans, int sum){
    if(i >= num.size()){
        ans.push_back(sum);
        return;
    }
    //pick
    subsetSumHelper(i+1, num, ans, sum + num[i]);
    //not pick
    subsetSumHelper(i+1, num, ans, sum);
}

vector<int> subsetSum(vector<int> &num) {
  vector<int> ans;
  int i = 0;
  int sum = 0;
  subsetSumHelper(i, num, ans, sum);
  sort(ans.begin(), ans.end());
  return ans;
}
