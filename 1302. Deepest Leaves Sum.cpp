class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        int ans=0;
        int maxlevel=0;
        deepestLeavesSum(root,0,maxlevel,ans);
        return ans;
        
    }
    void deepestLeavesSum(TreeNode* root,int level,int &maxlevel,int &ans) {
        if(!root){
            return;
            
        }
        if(level>maxlevel){
            maxlevel=level;
            ans=0;
        }
        if(level==maxlevel){
            ans+=root->val;
        }
        deepestLeavesSum(root->left,level+1,maxlevel,ans);
        deepestLeavesSum(root->right,level+1,maxlevel,ans);
        
        
    }
};