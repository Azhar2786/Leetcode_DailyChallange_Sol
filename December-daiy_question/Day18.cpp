//! 1913. Maximum Product Difference Between Two Pairs





class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int ans = (nums[n-1]*[n-2]) - (nums[0]*nums[1]);
        return ans;
    }
};