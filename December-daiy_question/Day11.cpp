1287. Element Appearing More Than 25% In Sorted Array




class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int ans = arr[0], count = 0;
        for(auto &i : arr) {
            if (i == ans){
                count++;
            }else{
                ans = i; count = 1;
            }

            if (count > arr.size()/4)
                return ans;
        }

        return ans;
    }
};