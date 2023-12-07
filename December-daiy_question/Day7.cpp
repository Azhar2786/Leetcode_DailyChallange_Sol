//! 1903. Largest Odd Number in String




class Solution {
public:
    string largestOddNumber(string num) {
        string ans = "";
        for(int i = num.size()-1; i>= 0; i--){
            if(int(num[i])%2 != 0){
                return  num.substr(0,i+1);
            }
        }
        return ans;
    }
};