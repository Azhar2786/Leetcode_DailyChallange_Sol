
//!  2265. Count Nodes Equal to Average of Subtree



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
    int ans = 0;
     pair<int, int> FindAvgOfTree(TreeNode* root){
         if(root == NULL){
             return {0,0};
         }
         pair<int, int>leftPart = FindAvgOfTree(root->left);
         pair<int, int>rightPart = FindAvgOfTree(root->right);

         int sum = root->val + leftPart.second + rightPart.second;
         int cnt = 1 + leftPart.first + rightPart.first;
         int avg = sum / cnt;
         if(avg == root->val){
             ans++;
         }
         return {cnt, sum};
     }
    int averageOfSubtree(TreeNode* root) {
        FindAvgOfTree(root);
        return ans;
    }
};