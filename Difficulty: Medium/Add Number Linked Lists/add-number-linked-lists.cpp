/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

Node * reverse(Node* head){
    Node* prev=NULL;
    while(head){
        Node* next=head->next;
        head->next=prev;
        prev=head;
        head=next;
        
    }
    return prev;
}
class Solution {
  public:
    Node* addTwoLists(Node* num1, Node* num2) {
        // code here
        num1=reverse(num1);
        num2=reverse(num2);
        Node* num3=new Node(0);
        Node* curr=num3;
        int carry=0;
        while(num1||num2||carry){
            int sum=carry;
            if(num1){
                sum+=num1->data;
                num1=num1->next;
            }
            if(num2){
                sum+=num2->data;
                num2=num2->next;
            }
            carry=sum/10;
            curr->next=new Node(sum%10);
            curr=curr->next;
        }
        Node* res= reverse(num3->next);
        
        while(res && res->data==0 && res->next!=NULL){
            Node* temp=res;
            res=res->next;
            delete temp;
        }
        return res;
    }
};