/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

// Function to find the data of kth node from the end of a linked list.
class Solution {
  public:
    int getKthFromLast(Node *head, int k) {
        // Your code here
        Node*temp=head;
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
            
        }
       
      
        if(k>cnt){
            return -1;
        }
         k=cnt-k;
        temp=head;
        while(k--){
            temp=temp->next;
        }
        
        return temp->data;
    }
};