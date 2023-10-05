
//!  229. Majority Element II

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>mp;
        int m = nums.size()/3;
        for(auto i : nums){
            mp[i]++;
        }

        for(auto i: mp){
            if(i.second>m){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};