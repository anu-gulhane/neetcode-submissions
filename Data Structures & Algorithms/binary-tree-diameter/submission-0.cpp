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
    int maxi=0;
    int fun(TreeNode *root){
         if(root==nullptr)return 0;
        if(!root->left && !root->right)return 0;
        int a=0,b=0;
        if(root->left)a=1+fun(root->left);
        if(root->right)b=1+fun(root->right);
        maxi=max(maxi,a+b);
        return max(a,b);
    }
    int diameterOfBinaryTree(TreeNode* root) {
       maxi=max(maxi,fun(root));
        return maxi;
    }
};
