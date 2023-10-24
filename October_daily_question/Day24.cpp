//! 515. Find Largest Value in Each Tree Row




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
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans;

        if(root==NULL)
        return ans;

        // Level order traversal
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int x=q.size(),maxi=INT_MIN;
            for(int i=0;i<x;i++){
                TreeNode* curr=q.front();
                q.pop();
                
                maxi=max(maxi,curr->val);
                
                if(curr->left){
                    q.push(curr->left);
                }
                
                if(curr->right){
                    q.push(curr->right);
                }
            }
            ans.push_back(maxi);
        }
        return ans;
    }
};