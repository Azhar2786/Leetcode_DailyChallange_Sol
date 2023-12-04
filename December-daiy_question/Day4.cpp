//! 2264. Largest 3-Same-Digit Number in String



class Solution {
public:
    string largestGoodInteger(string num) {
        string ans ="";
        for(int i=0;i<num.size()-2;i++){
            if(num[i]==num[i+1] && num[i+1] == num[i+2]){
                if(ans.size()==0) ans ="000";
                if(stoi(ans) < stoi(num.substr(i,3))){
                    ans = num.substr(i,3);
                }
            }
        }
        return ans;
    }
};