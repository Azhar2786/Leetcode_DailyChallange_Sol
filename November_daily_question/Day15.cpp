//! 1846. Maximum Element After Decreasing and Rearranging



class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        
        int prev = 0, n = arr.size();

        for(auto& el: arr){
            el = min(el, prev+1);
            prev = el;
        }
        return arr[n-1];
    }
};