// 2
// Insert at Beginning and End
// https://practice.geeksforgeeks.org/problems/linked-list-insertion-1587115620/1/

class Solution {
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       // Your code here
       Node *temp = new Node(x);
       temp->next = head;
       return temp; // temp is current head;
    }
    
    //Recursive method
    Node *insertAtEnd(Node *head, int x) {
       // Your code here
       if(!head) {
           return new Node(x);
       }
       if(!head->next) {
           head->next = new Node(x);
           return head;
       }
       
       head->next = insertAtEnd(head->next, x);
       return head;
    }

    // Iterative method
    Node *insertAtEnd(Node *head, int x)  {
       // Your code here
       Node *temp = new Node(x);
       if(!head) {
           return temp;
       }
       Node *curr = head;
       while(curr->next) {
           curr = curr->next;
       }
       curr->next = temp;
       return head;
    }
};
