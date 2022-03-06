// 8
// search in linkedlist
// https://ide.geeksforgeeks.org/xGegfaffFk

// recursive
bool search(Node* head, int x) {
	if (head == NULL) return false;
	if (head->key == x) return true;
	return search(head->next, x);
}
// iterative
bool search(Node* head, int x) {
	if (head == NULL) return false;
	while(head) {
    	if(head->key==x) return true;
      	head = head->next;
    }
  	return false;
}
