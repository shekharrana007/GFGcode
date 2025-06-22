// User function Template for C++

class Solution {
  public:
  void solve(stack<int> &s, int x){
      if(s.empty()){
          s.push(x);
          return;
      }
      int n=s.top();
      s.pop();
      solve(s,x);
      s.push(n);
  }
    stack<int> insertAtBottom(stack<int>& st, int x) {
    solve(st,x);
    return st;
    }
};