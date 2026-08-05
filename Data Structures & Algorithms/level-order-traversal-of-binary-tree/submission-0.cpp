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
    map<int,vector<int>>m;
    void add(TreeNode* root, int l){
        if(root==nullptr)return;
        m[l].push_back(root->val);
        add(root->left,l+1);
        add(root->right,l+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>res;
        add(root,0);
        for(auto &l:m){
            res.push_back(l.second);
        }
        return res;
    }
};
