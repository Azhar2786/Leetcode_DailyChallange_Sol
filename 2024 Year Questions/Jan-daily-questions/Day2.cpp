
2610. Convert an Array Into a 2D Array With Conditions


class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>>ans;
        unordered_map<int, int>freq;

        for(auto el: nums){
            freq[el]++;
            if(ans.size() < freq[el])
                ans.push_back({});

            ans[freq[el]-1].push_back(el);
        }
        return ans;
    }
};