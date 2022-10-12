/*
--- LINK --- https://leetcode.com/problems/same-tree/
*/

// APPROACH-1 
// In this we are using extra space
class Solution {
public:
    void preorder(TreeNode* root,vector<int> &ans){
        if(root==NULL){
            ans.push_back(NULL);
        }  
        if(root!=NULL){
           ans.push_back(root->val);
           preorder(root->left,ans);
           preorder(root->right,ans);  
         }
    }
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
         vector<int> ans1;
         vector<int> ans2;
         preorder(p,ans1);
         preorder(q,ans2);
         
         if(ans1==ans2){
            return true; 
         }
         return false;
    }
};

// APPROACH-2
// we aren't using any space

class Solution {
public:
      
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
         if(p==NULL && q==NULL){
            return true; 
         }
         if(p!=NULL && q!=NULL){
            return (p->val == q->val && isSameTree(p->left,q->left) && isSameTree(p->right,q->right)); 
         }
         return false;
    }
};
