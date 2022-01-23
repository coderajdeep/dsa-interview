// leetcode 701

// recursive

class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root) {
            return new TreeNode(val);
        }
        else if(val > root->val) {
            root->right = insertIntoBST(root->right, val);
        }
        else if(val < root->val) {
            root->left = insertIntoBST(root->left, val);
        }
        return root;
    }
};

// iterative

class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        
        TreeNode *temp = new TreeNode(val);
        TreeNode *curr = root, *parent = nullptr;
        
        while(curr) {
            parent = curr;
            if(val > curr->val) {
                curr = curr->right;
            }
            else if(val < curr->val) {
                curr = curr->left;
            }
            else {
                return root; // if val exist in BST
            }
        }
        if(!parent) {
            return temp; // if root is empty
        }
        if(val < parent->val) {
            parent->left = temp;
        }
        else {
            parent->right = temp;
        }
        return root;
    }
};
