// 7
// Count node of linked list
// https://practice.geeksforgeeks.org/problems/count-nodes-of-linked-list/1/

// Iterative solution
int getCount(struct Node* head){
    if(!head) return 0;
    int count = 0;
    Node *slow = head, *fast = head;
    while(fast and fast->next) {
        ++count;
        slow = slow->next;
        fast = fast->next->next;
    }
    if(fast) {
        return (2*count + 1);
    }
    return (2*count);
}

// recursive solution
int getCount(Node* head){
    if(!head) return 0;
    return (1 + getCount(head->next));
}
int getCount(Node* head){
    if(!head) return 0;
    if(!head->next) return 1;
    return 2 + getCount(head->next->next);
}
