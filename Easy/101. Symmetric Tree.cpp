/*
---Leetcode LINK--- https://leetcode.com/problems/symmetric-tree/
*/

bool match(TreeNode* root1,TreeNode* root2){
       if(root1!=NULL && root2!=NULL){
         bool a = match(root1->left,root2->right);
         bool b = match(root1->right,root2->left);
           
         if(root1->val==root2->val && a && b ){
           return true;  
         }  
         else{
             return false;
         }  
       }
       if(root1==NULL && root2==NULL){
          return true; 
       }
       else{
           return false;
       }
   }
    
    bool isSymmetric(TreeNode* root) {
         if(root==NULL){
            return true; 
         }
         return match(root->left,root->right);
    }
