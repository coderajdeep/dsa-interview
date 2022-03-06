// 4
// Delete last node
// Iterative method
// https://ide.geeksforgeeks.org/FqO0YKG3wx
Node* removeLastNode(Node* head) {
	if (!head) return NULL;
	if (!head->next) {
		delete head;
		return NULL;
	}
	Node* curr = head;
	while (curr->next->next)
		curr = curr->next;

	// Delete last node
	delete (curr->next);

	// Change next of second last
	curr->next = NULL;
	return head;
}

// Recursive method
// https://ide.geeksforgeeks.org/o8sY0ywYSQ
Node* removeLastNode(Node* head) {
	if (!head)
		return nullptr;

	if (!head->next) {
		delete head;
		return nullptr;
	}

	if(!head->next->next) {
    	delete head->next;
      	head->next = nullptr;
      	return head;
    }
  
  	head->next = removeLastNode(head->next);
  	return head;
}
