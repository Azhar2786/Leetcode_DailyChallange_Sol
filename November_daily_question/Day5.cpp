//!  1535. Find the Winner of an Array Game

class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int maxi = arr[0];
        int ans = 0;
        unordered_map<int, int>mp;
        for(int i=1; i<arr.size(); i++){
             maxi = max(arr[i], maxi);
             mp[maxi]++;
             if(mp[maxi] == k){
                 ans = maxi;
                 break;
             }
        }
        return ans == 0 ? maxi : ans;
    }
};