class Solution {
public:
    int maxLevelSum(TreeNode* root) {

        int level=1;
        int sum=0;
        vector<pair<int,int>>ans;

        queue<TreeNode*>q;

        q.push(root);
        q.push(NULL);

        while(!q.empty()){


            TreeNode* front=q.front();
            q.pop();

            if(front==NULL){

                ans.push_back({sum,level});
                sum=0;
                level++;

                if(!q.empty()) q.push(NULL);

            }
            else{
                sum+=front->val;
                if(front->left!=NULL) q.push(front->left);
                if(front->right!=NULL) q.push(front->right);
            }

        }

        pair<int, int> max_pair = ans[0];

        for(auto p:ans){
            if(p.first>max_pair.first){
                max_pair=p;
            }
        }

        return max_pair.second;
        
    }
};
