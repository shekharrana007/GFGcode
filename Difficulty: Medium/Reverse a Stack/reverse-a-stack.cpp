// User function Template for C++

class Solution {
  public:
  void solve(stack<int>&s, int x){
      if(s.empty()){
          s.push(x);
          return;
      }
      int temp=s.top();
      s.pop();
      solve(s,x);
      s.push(temp);
  }
    void Reverse(stack<int> &St) {
        if(St.empty()){
            return;
        }
        int temp=St.top();
        St.pop();
        Reverse(St);
        solve(St,temp);
    }
};