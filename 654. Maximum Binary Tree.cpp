class Solution {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if(nums.empty()){
            return NULL;
        }
        auto it=max_element(nums.begin(),nums.end());
        TreeNode* root=new TreeNode(*it);
        vector<int> numl(nums.begin(),it);
        vector<int> numr(++it,nums.end());
        
        root->left=constructMaximumBinaryTree(numl);
        root->right=constructMaximumBinaryTree(numr);
        return root;
    }
};