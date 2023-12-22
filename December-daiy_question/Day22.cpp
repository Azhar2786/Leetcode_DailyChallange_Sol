//1422. Maximum Score After Splitting a String


class Solution {
public:
    int maxScore(string s) {
       int n = s.size();
       int zero = 0 , one = 0;
       if(s[0]=='0')
            zero++;

       for(int i=1; i<n; i++){
        if(s[i]=='1')
            one++;
       } 
       int ans = zero+one;
       for(int i=1; i<n-1; i++){
           if(s[i]=='1')
                one--;
           else if(s[i]=='0')
                zero++;

           ans = max(ans , zero+one);
       }
       return ans;
    }
};