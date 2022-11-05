/*
---Leetcode LINK--- https://leetcode.com/problems/binary-search-tree-iterator/
*/

private: stack<TreeNode *> myStack;
    public:
    BSTIterator(TreeNode* root) {
        pushAll(root);
    }
     bool hasNext() {
         return !myStack.empty();
    }
    int next() {
        TreeNode* tempNode = myStack.top();
        myStack.pop();
        pushAll(tempNode->right);
        return tempNode->val;
    }
    private:
    void pushAll(TreeNode* root){
        while(root!=NULL){
            myStack.push(root);
            root=root->left;
        }
    }
