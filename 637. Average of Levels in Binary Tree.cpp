class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        
        vector<double> ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int qsize=q.size();
            double sum=0;
            double count=qsize;
            while(qsize--){
                TreeNode* f=q.front();
                q.pop();
                sum+=f->val;
                if(f->left){
                    q.push(f->left);
                }
                if(f->right){
                    q.push(f->right);
                }
            
            }
            double a=(sum*1.0)/count;
            ans.push_back(a);
        }
              
        return ans;
        
        
    }
};