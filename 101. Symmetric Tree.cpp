class Solution {
public:
    bool isSymmetric(TreeNode* r1,TreeNode* r2){
        if(!r1&&!r2){
            return true;
        }
        if(!r1 || !r2){
            return false;
        }
        if(r1->val!=r2->val){
            return false;
        }
        bool lst=isSymmetric(r1->left,r2->right);
        bool rst=isSymmetric(r2->left,r1->right);
        return lst&&rst;
    }
    bool isSymmetric(TreeNode* root) {
        if(!root){
            return true;
        }
        return isSymmetric(root->left,root->right);
        
        
    }
};