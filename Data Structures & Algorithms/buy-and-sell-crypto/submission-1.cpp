class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        for (int sellIndex = 1; sellIndex < (prices.size()); sellIndex++) {
            int minBuy = 100;
            for(int buyIndex = 0; buyIndex < sellIndex; buyIndex++) {
                if (prices[buyIndex] < minBuy) minBuy = prices[buyIndex];
            }
            int maxProfit = prices[sellIndex] - minBuy;
            profit = max(maxProfit, profit);
        }
        return profit;
    }
};
