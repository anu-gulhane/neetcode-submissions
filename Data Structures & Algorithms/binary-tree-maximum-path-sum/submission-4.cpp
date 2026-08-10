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
    int maxi=INT_MIN;
    int fun(TreeNode *root){
        if(root==NULL)return -99999;
        int left=fun(root->left);
        int right=fun(root->right);
        maxi=max(maxi,left);
        maxi=max(maxi,right);
        maxi=max(maxi,left+right+root->val);
        return root->val+max(0,max(left,right));
    }
    int maxPathSum(TreeNode* root) {
        maxi=max(maxi,fun(root));
        return maxi;
    }
};
