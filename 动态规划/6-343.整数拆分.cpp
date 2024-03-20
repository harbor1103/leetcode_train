//```题目描述：
//题目来源
//https://leetcode.cn/problems/integer-break/description/
//题目描述
//给定一个正整数 n ，将其拆分为 k 个 正整数 的和（ k >= 2 ），并使这些整数的乘积最大化。
//
//返回 你可以获得的最大乘积 。
//辅助：
//
//```

//#include<iostream>
//using namespace std;
//#include<vector>
//
//
//
//
//
//class Solution {
//public:
//    int integerBreak(int n) {
//
//        vector<int> dp(n + 1, 0);
//
//        for (int i = 2; i <= n; i++)
//        {
//            for (int j = 1; j < i; j++)
//            {
//                dp[i] = max(dp[i], max(j * (i - j), j * dp[i - j]));
//            }
//        }
//
//        return dp[n];
//    }
//};
//
//
//
//int main()
//{
//    Solution sol;
//    cout<< sol.integerBreak(5) << endl;
//
//
//}