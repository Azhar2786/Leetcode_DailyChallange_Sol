
//! 1704. Determine if String Halves Are Alike




class Solution {
public:
    bool check(char ch){
        char c = tolower(ch);
        if(c == 'a' || c == 'i' || c == 'o' || c == 'u' || c == 'e' ){
            return true;
        }
        return false;
    }
    bool halvesAreAlike(string s) {
       int half = s.length()/2;
        int leftCnt = 0, rightCnt = 0;
        for(int i=0; i<half; i++){
            if(check(s[i])){
                leftCnt++;
            }
        }
        for(int i=half; i<s.length(); i++){
            if(check(s[i])){
                rightCnt++;
            }
        }
        return leftCnt == rightCnt;
    }
};