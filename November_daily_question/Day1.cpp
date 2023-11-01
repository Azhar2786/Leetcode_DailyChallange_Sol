//! 501. Find Mode in Binary Search Tree



/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void solution(TreeNode* root, vector<int>& arr){
        if( root == NULL){
            return;
        }

        arr.push_back(root -> val);
        solution(root -> left, arr);
        solution(root -> right, arr);
    }
    vector<int> findMode(TreeNode* root) {
        // inordersal traversal:-
        vector<int> arr;
        vector<int> temp;
        int num = INT_MIN;
        bool flag = false;
        map<int, int> mp;

        solution(root, arr);

        for(auto x:arr){
            mp[x]++;
        }

        for(auto x:mp){
            if(x.second > 1){
                flag = true;
                num = max(num, x.second);
            }
        }

        for(auto x:mp){
            if(x.second > 1 && flag == true){
                if(num == x.second){
                    temp.push_back(x.first);
                }
            }
        }

        if(flag == true){
            return temp;
        }else{
            return arr;
        }
    }
};