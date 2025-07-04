/*

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution {
  public:
    // Function to check if the linked list has a loop.
    bool detectLoop(Node* head) {
        // your code here
        Node* temp=head;
        if(temp==NULL)return 0;
        temp=head;
        Node* slow=temp;
        Node*fast=temp;
        while(fast!=NULL && fast->next !=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow){
                return 1;
            }
        }
        return 0;
    }
};