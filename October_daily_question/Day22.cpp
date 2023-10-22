
//! 1793. Maximum Score of a Good Subarray



class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int n = nums.size();

        int ans = nums[k];
        int mini = nums[k];

        int i = k,j = k;

        while(i > 0 || j < n-1)
        {
            if((i > 0 ? nums[i-1] : 0) < (i < n-1 ? nums[j + 1] : 0))
            {
                mini = min(mini, nums[++j]);
            }
            else
            {
                mini = min(mini, nums[--i]);
            }

            ans = max(ans, mini * (j-i+1));
        }

        return ans;
    }
};