/*

https://practice.geeksforgeeks.org/problems/preorder-traversal/1
https://www.geeksforgeeks.org/tree-traversals-inorder-preorder-and-postorder/
https://www.techiedelight.com/preorder-tree-traversal-iterative-recursive/

*/

// Recursive approach

void preOrderUtil(Node *root, vector<int> &ans) {
    if(!root)
        return;
    ans.push_back(root->data);
    preOrderUtil(root->left, ans);
    preOrderUtil(root->right, ans);
}

vector <int> preorder(Node* root) {
    if(!root)
        return {};
    vector<int> ans;
    preOrderUtil(root, ans);
    return ans;
}


// Iterative approach

vector <int> preorder(Node* root){
    if(!root)
        return {};
    stack<Node*>s;
    s.push(root);
    Node *curr = nullptr;
    vector<int> ans;
    
    while(!s.empty()) {
        curr = s.top();
        s.pop();
        ans.push_back(curr->data);
        
        if(curr->right)
            s.push(curr->right);
        if(curr->left)
            s.push(curr->left);
    }
    return ans;
}
