//!  1897. Redistribute Characters to Make All Strings Equal




class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char,int>mp;
        for(auto it:words){
            for(auto it2:it){
                mp[it2]++;
            }
        }
        for(auto it:mp){
            if(it.second%words.size()!=0)
              return false; 
        }
        return true;
    }
};