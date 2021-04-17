class Solution {
public:
    int rangeSumBST(TreeNode* root, int l, int h) {
        if(root==NULL){
            return 0;
        }
        int sum=0;
        if(root->val>=l && root->val<=h){
            sum+=root->val;
        }
        int lst=0,rst=0;
        lst+=rangeSumBST(root->left,l,h);
        rst+=rangeSumBST(root->right,l,h);
        return sum+lst+rst;
        
        
    }
};