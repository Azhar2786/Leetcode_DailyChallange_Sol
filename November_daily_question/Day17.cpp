//!  1877. Minimize Maximum Pair Sum in Array



class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        vector<int>sum;
        int i=0,j=nums.size()-1;
        while(i <j){
            sum.push_back(nums[i]+nums[j]);
            i++,j--;
        }
        int ans = INT_MIN;
        for(auto i:sum){
            ans = max(ans,i);
        }
        return ans;
        
    }
};