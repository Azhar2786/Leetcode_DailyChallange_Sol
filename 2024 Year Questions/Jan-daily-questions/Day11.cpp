//! 1026. Maximum Difference Between Node and Ancestor






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
    int maxDiff(TreeNode* root, int maxVal, int minVal){
        if(root == nullptr){
            return maxVal - minVal;
        }
        maxVal = max(maxVal, root->val);
        minVal = min(minVal, root->val);
        int maxLeftDiff = maxDiff(root->left, maxVal, minVal);
        int maxRightDiff = maxDiff(root->right, maxVal, minVal);

        return max(maxLeftDiff, maxRightDiff);
    }
    int maxAncestorDiff(TreeNode* root) {
        if(root == NULL)
            return 0;
        return maxDiff(root, root->val, root->val);
    }
};