class Solution {
public:
    void storeRightView(TreeNode* root,vector<int>&rightView,int level){
        if(root==NULL) return ;

        if(rightView.size()==level){
            rightView.push_back(root->val);
        }

        storeRightView(root->right,rightView,level+1);
        storeRightView(root->left,rightView,level+1);

    }
    vector<int> rightSideView(TreeNode* root) {

        int level=0;
        vector<int>rightView;

        storeRightView(root,rightView,level);
        return rightView;
    }
};