//!  91. Decode Ways



class Solution {
public:

    int solve(string s,int ind,vector<int>&dp){
        if(ind==s.length())
            return 1;
        if(s[ind]=='0')
            return 0;
        if(dp[ind]!=-1) 
            return dp[ind];
        int cnt=0;
        cnt+=solve(s,ind+1,dp);
        if(ind+1<s.length()&& s.substr(ind,2)<"27")
        cnt+=solve(s,ind+2,dp);

        return dp[ind]=cnt;
    }
    int numDecodings(string s) {
        vector<int>dp(s.length(),-1);
        return solve(s,0,dp);
    }
};