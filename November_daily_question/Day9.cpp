//!  1759. Count Number of Homogenous Substrings




#define lt long long int
#define MOD 1000000007
class Solution {
public:
    int countHomogenous(string s) {
        lt ans = 0;
        for(int i=0; i<s.size();){
            lt cnt = 0;
            char ch = s[i];
            while( i < s.size() && s[i] == ch){
                cnt++;
                i++;
            }
            ans += ((cnt*(cnt+1))/2)%MOD;
        }
        return ans;
    }
};