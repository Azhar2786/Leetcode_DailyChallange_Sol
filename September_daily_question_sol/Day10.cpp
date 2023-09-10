//!  1359. Count All Valid Pickup and Delivery Options


// CODE
#define mod 1000000007;
class Solution {
public:
    int countOrders(int n) {
        long ans = 1;
        for (int i = 1; i <= n; ++i)
            ans = ans * (i * 2 - 1) * i % mod;
        return ans;
    }
};