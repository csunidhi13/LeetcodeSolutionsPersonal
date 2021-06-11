vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root){
            return {};
        }
        queue<TreeNode*> q;
        int len;
        TreeNode* temp;
        q.push(root);
        while(!q.empty()){
            vector<int> v;
            len=q.size();
            for(int i=0;i<len;i++){
                temp=q.front();
                q.pop();
                v.push_back(temp->val);
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            ans.push_back(v);
        }
        return ans;
    }