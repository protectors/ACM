class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res=0,tmp;
        int len=prices.size();
        vector<int> dp(len, 0);
        for(int i=1;i<len;i++){
            dp[i]=prices[i]-prices[i-1];
            if(dp[i]>0) res+=dp[i];
        }
        return res;
    }
};