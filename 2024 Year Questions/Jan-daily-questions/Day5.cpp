//!  300. Longest Increasing Subsequence








class Solution {
public:
    int solveUsingBinarysearch(vector<int>&num){
        int n = num.size();
        if(n==0){
            return 0;
        }
        vector<int>ans;
        ans.push_back(num[0]);
        for(int i=1; i<n; i++){
            if(num[i] > ans.back()){
                ans.push_back(num[i]);
            }
            else{
                int index = lower_bound(ans.begin(),ans.end(),num[i])-ans.begin();
                ans[index] = num[i];
            }
        }
        return ans.size();
    }
    int lengthOfLIS(vector<int>& nums) {
        int ans = solveUsingBinarysearch(nums);

        return ans;
    }
};