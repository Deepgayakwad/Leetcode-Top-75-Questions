class Solution {
public:
     
     void countgoodNodes(TreeNode* root,int&cnt,int value){
         if(root==NULL) return ;
         if(root->val>=value){
            cnt++;
         }

         countgoodNodes(root->left,cnt,max(root->val,value));

         countgoodNodes(root->right,cnt,max(root->val,value));
     }
    int goodNodes(TreeNode* root) {

        int cnt=0;
        int value=root->val;
        
        countgoodNodes(root,cnt,value);

        return cnt;
        
    }
};
