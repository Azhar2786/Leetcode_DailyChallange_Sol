
//! 872. Leaf-Similar Trees



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
    void inorderTrav(TreeNode* root, vector<int>&ans){
        if(root == NULL){
            return;
        }
        if(root->left == NULL && root->right == NULL){
            ans.push_back(root->val);
        }
        inorderTrav(root->left , ans);
        inorderTrav(root->right, ans);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>ans1;
        vector<int>ans2;
        inorderTrav(root1,ans1);
        inorderTrav(root2,ans2);
        
        return ans1 == ans2;
    }
};