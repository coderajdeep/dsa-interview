// 3
// Delete head/1st Node
Node* removeFirstNode(struct Node* head) {
    if (head == NULL) {
        return NULL;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node* removeFirstNode(Node *head){
    if(head==NULL) return NULL;
    
    Node *temp=head->next;
    delete(head);
    return temp;
}
