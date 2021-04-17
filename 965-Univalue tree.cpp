class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        if(root==NULL){
            return true;
        }
    bool lst=root->left==NULL or (root->left->val==root->val && isUnivalTree(root->left));
        bool rst=root->right==NULL or (root->right->val==root->val && isUnivalTree(root->right));
        return lst && rst;
        
    }
};