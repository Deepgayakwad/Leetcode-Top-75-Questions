class Solution {
public:

     void findleaf1(TreeNode* root1,vector<int>&ans1){

          if(root1==NULL) return ;
         

          if(root1->left==NULL && root1->right==NULL){
              ans1.push_back(root1->val);
          }

          findleaf1(root1->left,ans1);
          findleaf2(root1->right,ans1);


     }

      void findleaf2(TreeNode* root2,vector<int>&ans2){

          if(root2==NULL) return ;
         

          if(root2->left==NULL && root2->right==NULL){
              ans2.push_back(root2->val);
          }

          findleaf2(root2->left,ans2);
          findleaf2(root2->right,ans2);


     }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {

        vector<int>ans1;
        vector<int>ans2;

      findleaf1(root1,ans1);
      findleaf2(root2,ans2);

      if(ans1==ans2) return true;

      return false;
        
    }
};
