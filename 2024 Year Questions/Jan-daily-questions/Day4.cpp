//! 2870. Minimum Number of Operations to Make Array Empty




class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int,int>mp;
        int ans=0;
        if(nums.size()==0)
            return 0;
        for(auto i:nums){
            mp[i]++;
        }
        int a=0;
        for(auto i:mp){
             int val = i.second;
             if(val==1)
                return -1;
             ans+=val/3;
             if(val%3)
                ans++;
        }
        return ans;
        
    }
};
