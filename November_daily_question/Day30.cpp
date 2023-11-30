//! 1611. Minimum One Bit Operations to Make Integers Zero




#define ll long long int
class Solution {
public:
    int minimumOneBitOperations(int n) {
        vector<ll> f(31,0);
        f[0] = 1;

        for(int i=1; i<=30; i++){
            f[i] = 2*f[i-1]+1;
        }
        int count = 0, ans = 0;
        for(int i=30; i>=0; i--){
            if( ((1<<i) & n) ){
                count++;
                if(count%2){
                    ans += f[i];
                }else{
                    ans -= f[i];
                }
            }
        }
        return ans;
    }
};