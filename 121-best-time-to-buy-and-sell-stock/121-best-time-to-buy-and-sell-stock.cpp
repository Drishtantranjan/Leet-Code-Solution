class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int maxprofit=INT_MIN,minprice=INT_MAX,diff;
        for(int i=0;i<prices.size();i++)
        {
            //finding the min price
            if(prices[i]<minprice)
            {
                minprice=prices[i];
            }
            //finding price diff between current price and min price
            diff=prices[i]-minprice;
            //comparing price diff with max profit 
            if(diff>maxprofit)
            {
                maxprofit=diff;
            }
        }
        return maxprofit;
    }
};