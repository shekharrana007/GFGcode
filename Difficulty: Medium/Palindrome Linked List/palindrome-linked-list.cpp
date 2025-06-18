/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution {
  public:
  Node* reverseList(Node* head){
      Node* prev=NULL;
      Node* curr=head;
      while(curr!=NULL){
          Node*newnode=curr->next;
          curr->next=prev;
          prev=curr;
          curr=newnode;
      }
      return prev;
  }
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head) {
        // Your code here
        Node* temp=head;
        if(head==NULL)return 1;
        Node* slow=head;
        Node* fast=head;
        
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            
        }
        Node* s=reverseList(slow);
        Node* f=head;
        while(s){
            if(s->data!=f->data){
                return 0;
            }
            s=s->next;
            f=f->next;
        }
        return 1;
    }
};