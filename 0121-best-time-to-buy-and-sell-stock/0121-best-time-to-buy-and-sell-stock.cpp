class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minpr=prices[0];
        int profit = 0;
        for(int i=1;i<n;i++){
            minpr=min(minpr,prices[i]);
            profit=max(profit,prices[i]-minpr);
        }
        return profit;
    }
};