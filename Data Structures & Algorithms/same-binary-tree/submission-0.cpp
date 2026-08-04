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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==nullptr && q==nullptr)return true;
        if(p==nullptr && q!=nullptr)return false;
        if(p!=nullptr && q==nullptr)return false;
        if(!p->left && !q->left && !p->right && !q->right && p->val==q->val)return true;
        if(!p->left && !q->left && !p->right && !q->right && p->val!=q->val)return false;
        // cout<<p->val<<" "<<q->val<<endl;
        return (isSameTree(p->left,q->left) && isSameTree(p->right,q->right));
    }
};
