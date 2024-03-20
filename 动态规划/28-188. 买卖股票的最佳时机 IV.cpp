//#include<iostream>
//#include<vector>
//using namespace std;
//
//
//
//class Solution {
//public:
//    int maxProfit(int k, vector<int>& prices) {
//            vector<vector<int>> dp(prices.size() + 1, vector<int>((2*k) + 1, 0));
//            for (int i = 1; i <2* k; i+=2)
//            {
//                  dp[0][i]=-prices[0];
//            }
//
//            for (int i = 1; i < prices.size(); i++)
//            {
//                dp[i][0] = dp[i-1][0];
//                for (int j = 1; j <= 2 * k; j++)
//                {
//                    if (j % 2 == 1)
//                    {
//                        dp[i][j] = max(dp[i - 1][j], dp[i - 1][j-1] - prices[i]);
//                       
//                    }
//                    else if(j%2==0)
//                    {
//                        dp[i][j] = max(dp[i - 1][j], dp[i - 1][j-1] + prices[i]);
//                    }
//                }
//            }
//
//            return dp[prices.size() - 1][2*k];
//
//
//    }
//};
//
//
//int main()
//{
//	Solution s;
//	vector<int> prices = { 3,2,6,5,0,3 };
//	cout << s.maxProfit(2, prices) << endl;
//}