//! 1758. Minimum Changes To Make Alternating Binary String


class Solution {
public:
    int minOperations(string s) {
        int a0=0,a1=0,ans=0;
        for(int i=0;i<s.length();i++){
            if(i%2==0){
                if(s[i]=='0'){
                    a1++;
                }
                else{
                    a0++;
                }
            }
            else{
                if(s[i]=='1'){
                    a1++;
                }
                else{
                    a0++;
                }
            }
        }
        ans=min(a0,a1);
    return ans;    
    }
};