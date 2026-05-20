class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int minBuy = prices[0];
        int profit = 0;
        for (int sellIndex = 1; sellIndex < (prices.size()); sellIndex++) {
            minBuy = min(minBuy, prices[sellIndex]);
            profit = max(profit, prices[sellIndex] - minBuy);
        }
        return profit;

    }
};
