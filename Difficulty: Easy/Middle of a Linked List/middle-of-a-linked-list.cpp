/* Link list Node
struct Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */
class Solution {
  public:
    /* Should return data of middle node. If linked list is empty, then -1 */
    int getMiddle(Node* head) {
        // code here
        Node* temp=head;
       if(temp==NULL)return -1;
        temp=head;
        Node* fast=temp;
        Node* slow=temp;
        while(fast!=NULL && fast->next !=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow->data;
    }
};