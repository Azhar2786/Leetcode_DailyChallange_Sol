//! 938. Range Sum of BST




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
    void inorderTraversal(TreeNode* root,int &low, int &high, int &ans){
        if(root == NULL)
            return;
        inorderTraversal(root->left,low,high,ans);
        if(root->val >= low && root->val <= high ){
            ans += root->val;
        }
        inorderTraversal(root->right,low,high,ans);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int ans = 0;
        inorderTraversal(root,low,high,ans);
        return ans;
    }
};