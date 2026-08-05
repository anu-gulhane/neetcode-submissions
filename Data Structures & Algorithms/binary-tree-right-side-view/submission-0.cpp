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
    vector<int>res;
    void add(TreeNode* root, int l){
        if(root==nullptr)return;
        if(res.size() == l){
            res.push_back(root->val);
        }
        else{
            res[l]=root->val;
        }
        add(root->left,l+1);
        add(root->right,l+1);
        return;
    }
    vector<int> rightSideView(TreeNode* root) {
        add(root,0);
        return res;
    }
};
