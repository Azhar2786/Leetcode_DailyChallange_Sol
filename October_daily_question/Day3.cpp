//! 1512. Number of Good Pairs


class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans = 0;
        vector<int> freq(101,0);
        for(int i=0;i<nums.size();++i){
            ans += freq[nums[i]];
            ++freq[nums[i]];
        }
        return ans;
    }
};