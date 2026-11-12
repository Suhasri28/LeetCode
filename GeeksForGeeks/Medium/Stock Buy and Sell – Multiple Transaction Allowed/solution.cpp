class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        // code here
        int buy = prices[0], profit = 0, val = 0;
        for(int i = 1; i < prices.size(); i++) {
            if(prices[i] < prices[i-1]) {
                val += profit;
                buy = prices[i];
            }
            profit = prices[i] - buy;
        }
        val += profit;
        return val;
    }
};
