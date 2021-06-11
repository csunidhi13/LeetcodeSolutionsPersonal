class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(!root){
            return ans;
        }
        queue<TreeNode*> q{{root}};
        int len;
        while(!q.empty()){
            len=q.size();
            TreeNode* temp=q.front();
            q.pop();            
            ans.push_back(temp->val);            
         
            if(temp->right) q.push(temp->right);
            if(temp->left) q.push(temp->left);
            for(int i=0;i<len-1;i++){
            TreeNode* temp1=q.front();
            if(temp1->right) q.push(temp1->right);
            if(temp1->left) q.push(temp1->left);
                q.pop();
            }
        }
        return ans;
    }
};