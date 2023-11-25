//!  1685. Sum of Absolute Differences in a Sorted Array




class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int totalSum = 0, n = nums.size(), leftSum = 0;

        for(auto el: nums){
            totalSum += el;
        }

        vector<int>ans;
        for(int i=0; i<n; i++){
            int valLeft = (nums[i]* i) - leftSum;
            int valRight = (totalSum - leftSum - nums[i]*(n-i));
            leftSum += nums[i];

            ans.push_back(valLeft + valRight);
        }

        return ans;
    }
};