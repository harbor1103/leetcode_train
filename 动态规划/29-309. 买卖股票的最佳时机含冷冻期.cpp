//#include<iostream>
//using namespace std;
//#include<vector>
//
//
//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//        vector<vector<int>> dp(prices.size(), vector<int>(4, 0));
//        dp[0][0] = -prices[0];   //持有
//        dp[0][1] = 0;   //不持有
//        dp[0][2] = 0;   //今天卖出
//        dp[0][3] = 0; //冷冻期
//
//        for (int i = 1; i < prices.size(); ++i)
//        {
//            dp[i][0] = max(dp[i - 1][0], max(dp[i - 1][3]-prices[i], dp[i - 1][1] - prices[i]));
//            dp[i][1] = max(dp[i - 1][1], dp[i - 1][3]);
//            dp[i][2]= dp[i-1][0]+prices[i];
//            dp[i][3]= dp[i - 1][2];
//
//        }
//
//        return max(dp[prices.size()-1][1],max(dp[prices.size()-1][2],dp[prices.size()-1][3]));
//    }
//};