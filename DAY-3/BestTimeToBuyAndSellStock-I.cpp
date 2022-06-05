class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_prices = INT_MAX;
        int max_profit = 0;

        for(int i =0; i<prices.size(); i++)
        {
            min_prices = min(min_prices, prices[i]);
            max_profit = max(max_profit, prices[i] - min_prices);
        }

        return max_profit;


    }
};
