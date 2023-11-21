//! 1814. Count Nice Pairs in an Array





class Solution {
public:
    int reverse(int num) { 
        int rev_num = 0; 
        while (num > 0) { 
            rev_num = rev_num * 10 + num % 10; 
            num = num / 10; 
        } 
        return rev_num; 
    } 
    int countNicePairs(vector<int>& nums) {
        int ans = 0;
        long int MOD = pow(10,9)+7;

        unordered_map<int, int>freq;

        for(auto el: nums ){
            int val = el - reverse(el);

            ans = (ans + freq[val])%MOD;
            freq[val]++;
        }
        return ans;
    }
};