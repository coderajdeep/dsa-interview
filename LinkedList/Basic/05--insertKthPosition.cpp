// 5
// Insert at Kth position
// https://workat.tech/codes/wuh784o8

ListNode* addAtkthElement (ListNode* head, int k, ListNode* newElement) {
	// head==nullptr and head!=nullptr ; both condition will be handled
	if(k==1) {
		newElement->next = head;
		return newElement; // newElement is new head
	}
	if(!head or k<0) {
		return head;
	}
	int count = 2;
	ListNode *curr = head;
	while(curr) {
		if(count==k) {
			newElement->next = curr->next;
			curr->next = newElement;
			return head;
		}
		++count;
		curr = curr->next;
	}
	// if (sizeOfLinkedList+1)<k 
	// then we can't insert newElement
	return head;
}
