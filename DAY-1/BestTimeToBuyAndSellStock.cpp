class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = INT_MAX;
        int maxP = 0;
        int profit = 0;
        for(int i =0; i<prices.size(); i++)
        {
            if(prices[i] < min)
            {
                min = prices[i];
            }
            profit = prices[i] - min;
            if(maxP < profit)
            {
                maxP = profit;
            }

        }
        return maxP;
    }
};
