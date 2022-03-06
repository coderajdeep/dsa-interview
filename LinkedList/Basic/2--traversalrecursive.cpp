// 1
// Singly linkedList Traversal
// https://practice.geeksforgeeks.org/problems/print-linked-list-elements/1

// Recursive method
class Solution {
    public:
    void display(Node *head) {
        if(!head) {
            return;
        }
        cout<<head->data<<" ";
        display(head->next);
    }
};
