//!  823. Binary Trees With Factors



class Solution {
public:
    int mod=1e9+7;
    int numFactoredBinaryTrees(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        unordered_map<long long,long long> dp,mp;

        int n=arr.size();
        long long ans=0;

        for(auto it:arr)
        {
            mp[it]=1;
            dp[it]=1;
        }

        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(arr[i]%arr[j]==0)
                {
                    if(mp.find(arr[i]/arr[j])!=mp.end())
                    {
                        long long curr=1;
                        curr=(((long long)dp[arr[j]]%mod)*(dp[arr[i]/arr[j]]%mod))%mod;
                        dp[arr[i]]+=curr;
                    }
                }
            }
        }
        for(auto it:dp)
        {
            ans=ans+it.second;
            ans=ans%mod;
        }
        return ans%mod;
    }
};