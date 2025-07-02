class MyStack {
  private:
    StackNode *top;

  public:
    void push(int x) {
        // code here
         StackNode* node=new  StackNode(x);
         if(top==nullptr){
             top=node;
         }else{
             node->next=top;
             top=node;
         }
        
    }

    int pop() {
        if(top==nullptr){
            return -1;
        }else{
            int ans=top->data;
            top=top->next;
            return ans;
        }
        // code here
    }

    MyStack() { top = NULL; }
};