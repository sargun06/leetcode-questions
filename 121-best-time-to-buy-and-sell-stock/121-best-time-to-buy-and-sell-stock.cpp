class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==1)
            return 0;
        int min=prices[0], prof=0;
        for(int i=1; i<prices.size(); i++)
        {
            if(min>prices[i])
                min=prices[i];
            prof=max((prices[i]-min),prof);

        }
        
        return prof;
    }
};