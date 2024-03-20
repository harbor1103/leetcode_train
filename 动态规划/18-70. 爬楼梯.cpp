//#include<iostream>
//using namespace std;
//#include<vector>
//
//
//
//class Solution {
//public:
//    int climbStairs(int n) {
//        vector<int> nums{ 1,2 };
//        vector<int> dp(n + 1, 0);
//        dp[0] = 1;
//        for (int j = 0; j <= n; j++)
//        {
//            for (int i = 0; i < nums.size(); i++)
//            {
//                if (nums[i] <= j)
//                {
//                    dp[j] += dp[j - nums[i]];
//                }
//               
//            }
//        }
//        return dp[n];
//
//    }
//};