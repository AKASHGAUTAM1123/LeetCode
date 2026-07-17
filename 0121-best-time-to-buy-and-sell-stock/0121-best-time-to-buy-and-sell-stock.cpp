class Solution {
public:
    int maxProfit(vector<int>& prices) {
    //     int maxProfit=0,bestBuy=prices[0];

    //     for(int i=1;i<prices.size();i++){
    //         if(prices[i]>bestBuy){
    //             maxProfit = max(maxProfit,prices[i]-bestBuy);
    //         }
    //         bestBuy=min(bestBuy,prices[i]);
    //     }
    //     return maxProfit;
    // }

    // USING SLIDING WINDOW

    int left = 0;
    int right = 1;
    int maxprofit = 0;

    while(right<prices.size()){
        if(prices[right]>prices[left]){
            int profit = prices[right]-prices[left];
            maxprofit=max(maxprofit,profit);
        }else{
            left = right;
        }
        right++;
    }
    return maxprofit;
    }
};