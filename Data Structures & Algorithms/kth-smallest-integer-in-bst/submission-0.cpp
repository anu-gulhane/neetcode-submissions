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
    vector<int>v;
    int c=0;
    bool add(TreeNode *root, int k){
        if(!root)return false;
        bool b=add(root->left,k);
        if(b)return true;
        v.push_back(root->val);
        c++;
        if(c==k)return true;
        return add(root->right,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        add(root,k);
        return v[v.size()-1];
    }
};
