class Solution {
public:
    int maxDepth(TreeNode* root) {

        if(root==NULL) return 0;

        int leftHeight=maxDepth(root->left);
        int rightHeight=maxDepth(root->right);

        int height=max(leftHeight,rightHeight)+1;

        // add 1 for adding the root height to mainAns
        
        return height;
    }
};