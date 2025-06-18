/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

class Solution {
  public:
    Node* reverseList(struct Node* head) {
        // code here
        Node* temp=head;
        int cnt=0;
        while(temp!=NULL){
            temp=temp->next;
            cnt++;
            
        }
        Node* prev=NULL;
        temp=head;
        for(int i=0;i<cnt;++i){
            Node* newnode=temp->next;
            temp->next=prev;
            prev=temp;
            temp=newnode;
           
        }
        return prev;
    }
};