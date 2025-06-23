class Solution {
  public:
  bool solve(string &s){
      stack<char>st;
      for(int i=0;i<s.size();i++){
          char ch=s[i];
          if(ch=='('||ch=='+'||ch=='-'||ch=='*'||ch=='/'){
              st.push(ch);
          }
          else{
              if(ch==')'){
                  bool d=true;
                  while(st.top()!='('){
                      char top=st.top();
                      if(top=='+'||top=='-'||top=='*'||top=='/'){
                          d=false;
                      }
                      st.pop();
                  }
                  if(d==true){
                      return true;}
                      st.pop();
                  
              }
          }
      }
      return false;
  }
    int checkRedundancy(string s) {
        // code here
       return  solve(s);
        
    }
};
