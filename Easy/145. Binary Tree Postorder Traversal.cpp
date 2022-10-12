/*
--- LINK --- https://leetcode.com/problems/binary-tree-postorder-traversal/
*/

    void postorder(TreeNode* root, vector<int> &ans){
         if(root!=NULL){
           postorder(root->left,ans);
           postorder(root->right,ans);
           ans.push_back(root->val);  
         }
    } 
    
    vector<int> postorderTraversal(TreeNode* root) {
          vector<int> ans;
          postorder(root,ans);
          return ans;
    }
