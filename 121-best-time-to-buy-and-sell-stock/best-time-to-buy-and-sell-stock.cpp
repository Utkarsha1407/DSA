class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;   // ab tak ka sabse minimum price
    int maxProfit = 0;        // maximum profit

    for (int i = 0; i < prices.size(); i++) {
        int price = prices[i];   // current day ka price

        if (price < minPrice) {
            minPrice = price;    // better buying opportunity mil gayi
        } else {
            int profit = price - minPrice;   // aaj sell kare to kitna milega
            if (profit > maxProfit) {
                maxProfit = profit;          // best profit update
            }
        }
    }

    return maxProfit;
}

};