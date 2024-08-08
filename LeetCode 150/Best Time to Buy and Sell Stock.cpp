class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxProfit = 0;
        int minPrice = INT_MAX;

        for(int i = 0; i < n; i++) {
            if(prices[i] < minPrice) {
                minPrice = prices[i];  // Update the minimum price
            } else if(prices[i] - minPrice > maxProfit) {
                maxProfit = prices[i] - minPrice;  // Update maxProfit if current profit is higher
            }
        }
        return maxProfit;
    }
};
