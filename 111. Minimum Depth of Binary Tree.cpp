class Solution {
public:
  
    int minDepth(TreeNode* root) {
        if(root==NULL){return 0;}
        if(!root->right){
            return minDepth(root->left)+1;
        }
        if(!root->left){
            return minDepth(root->right)+1;
        }
        int lst=minDepth(root->left);
        int rst=minDepth(root->right);
        return min(lst,rst)+1;  
    }
};