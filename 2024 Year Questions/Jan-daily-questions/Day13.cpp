//! 1347. Minimum Number of Steps to Make Two Strings Anagram





class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>mp;
        for(auto i: s){
            mp[i]++;
        }
        for(auto i: t){
            if(mp.find(i) != mp.end()){
                mp[i]--;
            }
        }

        int ans = 0;
        for(auto i: mp){
            if(i.second > 0)
                ans += i.second;
        }
        return ans;
    }
};