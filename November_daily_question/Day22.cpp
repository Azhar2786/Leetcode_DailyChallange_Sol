//! 1424. Diagonal Traverse II




class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        int maxSum = 0;
        vector<int>ans;
        unordered_map<int, vector<int>> sumToElement;

        for(int i=nums.size()-1; i>=0; i--){
            for(int j=0; j<nums[i].size(); j++){
                maxSum = max(maxSum, i+j);
                sumToElement[i+j].push_back(nums[i][j]);
            }
        }

        for(int i=0; i<=maxSum; i++){
            for(auto el: sumToElement[i]){
                ans.push_back(el);
            }
        }

        return ans;
    }
};





class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<int>ans;
        queue<pair<int,int>>q;
        q.push({0,0});

        while(!q.empty()){
            int size = q.size();
            while(size--){
                auto [i,j] = q.front();
                q.pop();

                ans.push_back(nums[i][j]);
                if( j==0 && i+1<nums.size()){
                    q.push({i+1, j});
                }

                if(j+1<nums[i].size()){
                    q.push({i, j+1});
                }
            }
        }
        return ans;
    }
};




