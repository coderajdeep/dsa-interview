// 6
// Delete k-th node (1-based indexing)
// https://workat.tech/codes/c0b0zidl

Node* deleteNode(Node *head,int x) {
    if(!head) return head;
    if(x==1) {
        Node *temp = head->next;
        delete head;
        return temp;
    }
    int count = 2;
    Node *curr = head;
    while(curr->next) {
        if(count==x) {
            Node *temp = curr->next;
            curr->next = temp->next;
            delete temp;
            return head;
        }
        ++count;
        curr = curr->next;
    }
    return head;
}
