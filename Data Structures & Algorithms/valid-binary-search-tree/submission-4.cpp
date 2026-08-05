class Solution {
public:
    bool fun(TreeNode* root, long long mini, long long maxi) {

        if(root == nullptr)
            return true;

        if(root->val <= mini || root->val >= maxi)
            return false;

        return fun(root->left, mini, root->val) &&
               fun(root->right, root->val, maxi);
    }

    bool isValidBST(TreeNode* root) {
        return fun(root, LLONG_MIN, LLONG_MAX);
    }
};