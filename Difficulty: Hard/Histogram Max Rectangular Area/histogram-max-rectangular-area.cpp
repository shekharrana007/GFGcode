class Solution {
    vector<int>nextsmaller(vector<int> &arr,int n){
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
      vector<int>prevsmaller(vector<int> &arr,int n){
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
  public:
    int getMaxArea(vector<int> &arr) {
        // Your code here
        int n=arr.size();
        vector<int>next(n);
        next=nextsmaller(arr,n);
        vector<int>prev(n);
        prev=prevsmaller(arr,n);
        int area=0;
        for(int i=0;i<n;i++){
            int l=arr[i];
            if(next[i]==-1){
                next[i]=n;
            }
            int b=next[i]-prev[i]-1;
            int newarea=l*b;
            area=max(area,newarea);
        }
        return area;
    }
};
