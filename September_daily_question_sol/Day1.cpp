class Solution {
public:
    int countSetBitsFast(int n) {
        int count = 0;
        while(n != 0) {
            //remove last set bit
            n = (n & (n-1));
            count++;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int>ans;

        for(int i=0; i<=n; i++){
            ans.push_back(countSetBitsFast(i));
        }
        return ans;
    }
};