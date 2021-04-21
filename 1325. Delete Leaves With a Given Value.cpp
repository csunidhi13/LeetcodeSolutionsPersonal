class Solution {
public:
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        if(!root ){
            return NULL;
        }
        
        if(root->left) root->left=removeLeafNodes(root->left,target);
        if(root->right) root->right=removeLeafNodes(root->right,target);
        if(root->left==root->right && root->val==target){
            return NULL;
        }
        return root;
        
    }
};
//use postorder traversal here as when using pre order, the node is checked before its 
//child nodes have been checked and thus it might not be a leaf yet
//but once the left and right nodes are checked it would become a leaf node