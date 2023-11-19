//! 1887. Reduction Operations to Make the Array Elements Equal




class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.rbegin(), nums.rend());

        int ans = 0, cnt=1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i] != nums[i-1]){
                ans +=cnt;
            }
            cnt++;
        }
        return ans;
    }
};