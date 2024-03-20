////```题目描述：
////题目来源
////https ://leetcode.cn/problems/climbing-stairs/
////题目描述
////假设你正在爬楼梯。需要 n 阶你才能到达楼顶。
////每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？
////
////辅助：
////```
//
//#include<iostream>
//using namespace std;
//#include<vector>
//
//class Solution {
//public:
//    int climbStairs(int n) {
//        if (n == 1)
//        {
//            return 1;
//        }
//        else
//        {
//            vector<int> dp(n + 1);
//            dp[0] = 1;
//            dp[1] = 1;
//            for (int i = 2; i <= n; i++)
//            {
//                dp[i] = dp[i - 1] + dp[i - 2];
//            }
//            return dp[n];
//        }
//    }
//};
//
//
//
//int main()
//{
//    Solution sol;
//    cout << sol.climbStairs(3) << endl;
//
//
//}