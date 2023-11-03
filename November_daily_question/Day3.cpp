//!  1441. Build an Array With Stack Operations



class Solution {
public:
    bool find(vector<int>& target,int i){
        for(auto k: target){
            if(k == i){
                return true;
                break;
            }
        }
        return false;
    }
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>ans;
        vector<int> num;
        for(int i=1; i<=n; i++){
            num.push_back(i);
          ans.push_back("Push");
            if(!find(target,i)){
                ans.push_back("Pop");
                num.pop_back();
            }
            if(num==target){
                break;
            }
        }
        return ans;
    }
};