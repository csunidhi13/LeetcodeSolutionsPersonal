class Solution {
public:
    bool presentOne(TreeNode* root){
        if(!root){
            return false ;
        }
        bool ans;
        if(root->val!=1 && !presentOne(root->left)&& !presentOne(root->right)){
            ans=false;
        }
        else ans=true;
        
        return ans;
        // bool lst=presentOne(root->left);
        // bool rst=presentOne(root->right);
        // return ans||lst||rst;
        
    }
    TreeNode* pruneTree(TreeNode* root) {
        if(!root){
            return NULL;
        }
        if(!presentOne(root)&&!presentOne(root->left)&&!presentOne(root->right)){
            return NULL;
        }
        root->left=pruneTree(root->left);
        root->right=pruneTree(root->right);
        return root;
        
    }
};