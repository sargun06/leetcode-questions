class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price=INT_MAX;
        int max_profit=0;
        for(int i=0; i<prices.size(); i++)
        {
            int current_profit=prices[i]-min_price;
            max_profit=max(max_profit,current_profit);
            if(prices[i]<min_price)
            min_price=prices[i];
        }
        return max_profit;
    }
};