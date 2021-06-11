class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root){
            return NULL;
        }
        
        TreeNode* temp=root->left;
        root->left=root->right;
        root->right=temp;
        root->left=invertTree(root->left);
        root->right=invertTree(root->right);
        return root;
        
        
    }
};


class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        //using stack
        if(!root) return NULL;
        stack<TreeNode*> s{{root}};
        while(!s.empty()){
            TreeNode* node=s.top();
            s.pop();
            if(node){
                s.push(node->left);
                s.push(node->right);
                swap(node->left,node->right);
            }
        }
        return root;
        
//         Top Down
//         if(!root) return NULL;
//         TreeNode *r=root->right;
//         TreeNode* l=root->left;
//         root->left=r;
//         root->right=l;
//         invertTree(root->left);
//         invertTree(root->right);
//         return root;
        
//         Bottom Up
//         if(!root){
//             return NULL;
            
//         }
//         TreeNode* temp=root->left;
//         root->left=invertTree(root->right);
//         root->right=invertTree(temp);
//         return root;
    }
};