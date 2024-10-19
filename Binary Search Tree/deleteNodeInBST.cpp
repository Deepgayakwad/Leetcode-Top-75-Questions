class Solution {
public:
    
    int maxVal(TreeNode* root){

        TreeNode* temp=root;
        if(temp==NULL) return -1;

        while(temp->right!=NULL){
            temp=temp->right;
        }

       return  temp->val;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {

        if(root==NULL) return NULL;

        if(root->val==key){
            // we have to handle 4 cases

            if(root->left==NULL && root->right==NULL){
                delete root;
                return NULL;
            }
            else if(root->left!=NULL && root->right==NULL){
                TreeNode* child=root->left;
                delete root;
                return child;
            }
            else if(root->right!=NULL && root->left==NULL){
                TreeNode* child=root->right;
                delete root;
                return child;
            }
            else {
                // when root->left!=NULL && root->right!=NULL 
                int inorderPre=maxVal(root->left);
                // replace 
                root->val=inorderPre;

                // then delete inorderPre from left sub tree
                root->left=deleteNode(root->left,inorderPre);
                return root;

            }
           
        }
        else if(key<root->val){
            root->left=deleteNode(root->left,key);
        }
        else if(key>root->val){
            root->right=deleteNode(root->right,key);
        }

        return root;
        
    }
};
