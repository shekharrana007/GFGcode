class Solution {
    bool knows(vector<vector<int> >& mat,int a,int b,int n){
      if(mat[a][b]==1){
          return true;
      }
      else{
          return false;
      }
  }
  public:
  
    int celebrity(vector<vector<int> >& mat) {
        // code here
        int n=mat.size();
        stack<int>s;
        for(int i=0;i<n;i++){
            s.push(i);
            
        }
        while(s.size()>1){
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
            if( knows(mat,a,b,n)){
                s.push(b);
            }
            else{
                s.push(a);
            }
        }
        int ans=s.top();
        for (int i = 0; i < n; i++) {
            if (i != ans && (mat[ans][i] == 1 || mat[i][ans] == 0)) {
                return -1;
            }
        }
        return ans;
    }
};