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
    int fun(TreeNode *root){
        if(root==nullptr)return 0;
        if(!root->left && !root->right)return 1;
        int l=0,r=0;
        if(root->left)l=fun(root->left);
        if(l==INT_MAX)return l;
        if(root->right)r=fun(root->right);
        if(r==INT_MAX)return r;
        if(abs(l-r)<=1)return 1+max(l,r);
        else return INT_MAX; 
    }
    bool isBalanced(TreeNode* root) {
        int d= fun(root);
       return d==INT_MAX ?  false: true;
    }
};
