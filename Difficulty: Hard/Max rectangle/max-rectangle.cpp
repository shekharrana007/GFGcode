class Solution {
  private:
  vector<int>nexts(vector<int>&arr,int n){
      stack<int>s;
      s.push(-1);
      vector<int>ans(n);
      for(int i=n-1;i>=0;i--){
          int curr=arr[i];
          while(s.top()!=-1 && arr[s.top()]>=curr){
              s.pop();
          }
          ans[i]=s.top();
          s.push(i);
      }
      return ans;
  }
  vector<int>prevs(vector<int>& arr,int n){
      stack<int>s;
      s.push(-1);
      vector<int>ans(n);
      for(int i=0;i<n;i++){
          int curr=arr[i];
          while(s.top()!=-1 && arr[s.top()]>=curr){
              s.pop();
          }
          ans[i]=s.top();
          s.push(i);
      }
      return ans;
  }
  int hist(vector<int>& h){
      int n=h.size();
      vector<int>next(n);
      next=nexts(h,n);
      vector<int>prev(n);
      prev=prevs(h,n);
      int area=INT_MIN;
      for(int i=0;i<n;i++){
          int l=h[i];
          if(next[i]==-1){
              next[i]=n;
          }
         int b=next[i]-prev[i]-1;
         int newarea=l*b;
         area=max(area,newarea);
      }
      return area;
  }
  
  public:
    int maxArea(vector<vector<int>> &mat) {
        // code here
        int n=mat.size();
        int m=mat[0].size();
        vector<int>height(m,0);
        int area=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==1){
                    height[j] +=1;
                }
                else{
                    height[j]=0;
                }
            }
        
        area=max(area,hist(height));
        }
        
    return area;}
};