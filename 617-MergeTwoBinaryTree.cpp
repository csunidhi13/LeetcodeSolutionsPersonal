struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1==NULL && root2==NULL){
            return NULL;
        }
        TreeNode* newroot;
       if( root1 && !root2){
           newroot=new TreeNode(root1->val);
            newroot->left=(root1->left);
            newroot->right=(root1->right);
            return newroot;
        }
        if(root1 && root2){
            newroot=new TreeNode(root1->val + root2->val);
            newroot->left=mergeTrees(root1->left,root2->left);
            newroot->right=mergeTrees(root1->right,root2->right);
            return newroot;           
            
        }
        
       else{
           newroot=new TreeNode(root2->val);
            newroot->left=(root2->left);
            newroot->right=(root2->right);
            return newroot;
            
        }
}
