class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = INT_MAX, profit = 0, mp = 0;
        for(int num : prices) {
            if(num < buy) {
                buy = num;
            }
            profit = num - buy;
            if(profit > mp) {
                mp = profit;
            }
        }

        return mp;
    }
};