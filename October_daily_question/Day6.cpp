//! 343. Integer Break

class Solution {
public:
    int integerBreak(int n) {
        if (n == 2)
            return 1;

        if (n == 3)
            return 2;

        int totalPow = (n + 2) / 3;
        int twoPow = (3 - (n % 3)) % 3;
        int threePow = totalPow - twoPow;

        return pow(3, threePow) * pow(2, twoPow);
    }
};