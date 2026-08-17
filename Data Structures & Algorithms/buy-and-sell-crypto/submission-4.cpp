class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() <= 1) {return 0;}
        int left = 0;
        int right = 1;
        int profit = 0;

        while (right < prices.size()) {
            //takes care of monotonic decreasing case since we are returning profit
            if (prices[right] - prices[left] > profit) {
                profit = prices[right] - prices[left];
            }
            if (prices[right] < prices[left]) {
                prices[left] = prices[right];
            }
            ++right;
        }
        return profit;
    }
};
