//! 1464. Maximum Product of Two Elements in an Array



class Solution {
public:
    int secondLargest(vector<int>& arr,int n,int &large){
        if(n<2)
        return -1;
        int second_large=INT_MIN;
        int i;
        for (i = 0; i < n; i++) {
            if (arr[i] >= large){
                second_large = large;
                large = arr[i];
            }else if (arr[i] >= second_large && arr[i] != large){
                second_large = arr[i];
            }
        }
        return second_large;                
    }
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int large = INT_MIN;
        int sLarge = secondLargest(nums, n,large);
        return ((sLarge-1)*(large-1));
    }
};