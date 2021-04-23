class Solution {
public:
    int height(TreeNode* r){
        if(!r){return 0;}
        int lst=height(r->left);
        int rst=height(r->right);
        return max(lst,rst)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root){
            return 0;
        }
        int lh=height(root->left);
        int rh=height(root->right);
        int d=lh+rh;
        int ld=diameterOfBinaryTree(root->left);
        int rd=diameterOfBinaryTree(root->right);
        return max(d,max(ld,rd));
    }
};