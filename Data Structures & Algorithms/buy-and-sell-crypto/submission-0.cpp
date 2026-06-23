class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int low = 0, high = 1;
        int maxP = 0;

        while (high < prices.size()) {
            if (prices[low] < prices[high]) {
                int profit = prices[high] - prices[low];
                maxP = max(maxP, profit);
            } 
            else {
                low = high;
            }
            high++;
        }
        return maxP;
    }
};
