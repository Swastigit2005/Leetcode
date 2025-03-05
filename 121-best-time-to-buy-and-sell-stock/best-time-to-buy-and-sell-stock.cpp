class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int buy=prices[0];int  profit=0;
        for(int i=0; i<prices.size();i++)
        {
            if (prices[i]<buy)
            {
                buy=prices[i];
            }
            else if(prices[i]-buy>profit)
            {
                profit=prices[i]-buy;
            }
        }
        return profit;
        
    }
};