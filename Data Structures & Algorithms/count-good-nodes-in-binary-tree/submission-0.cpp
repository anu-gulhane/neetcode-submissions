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
    int count=0;
    void add(TreeNode* root, int m){
        if(root==nullptr)return;
        if(root->val>=m){
            count++;
            add(root->left,root->val);
            add(root->right,root->val);
        }
        else{
            add(root->left,m);
            add(root->right,m);
        }
    }
    int goodNodes(TreeNode* root) {
        add(root,INT_MIN);
        return count;
    }
};
