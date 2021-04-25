class Solution {
public:
    void formseq(TreeNode* root,vector<int>& ans){
        
        if(!root){
            return ;
            
        }
        if(!root->left && !root->right){
            ans.push_back(root->val);
            
        }        
        formseq(root->left,ans);
        formseq(root->right,ans);
        
        return;
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        if(!root1 && !root2){
            return true;
        }
        vector<int> v1,v2;
        formseq(root1,v1);
        formseq(root2,v2);
        bool ans=true;
        if(v1.size()!=v2.size()){
            ans= false;
        }
        else{
        for(int i=0;i<v1.size();i++){
            if(v1[i]!=v2[i]){
                 ans= false;
                break;
            }            
        }
        }
        return ans;
        
        
    }
};