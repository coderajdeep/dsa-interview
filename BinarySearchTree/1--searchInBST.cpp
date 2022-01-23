// leetcode 700

// recursive solution

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        
        if(!root or root->val == val) {
            return root;
        }
        
        if(val > root->val) {
            return searchBST(root->right, val);
        }
        
        return searchBST(root->left, val);
        
    }
};

// iterative solution

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        while(root) {
            if(val == root->val) {
                return root;
            }
            else if(val > root->val) {
                root = root->right;
            }
            else {
                root = root->left;
            }
        }
        return nullptr;
    }
};
