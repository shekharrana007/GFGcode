class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int n=prices.size();
        int mini=prices[0];
        int pro=0;
        for(int i=0;i<n;i++){
            int cost=prices[i]-mini;
            pro=max(pro,cost);
            mini=min(prices[i],mini);
        }
        return pro;
    }
    
};
