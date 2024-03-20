//```题目描述：
//题目来源
//https ://leetcode.cn/problems/fibonacci-number/description/
//题目描述
//斐波那契数 （通常用 F(n) 表示）形成的序列称为 斐波那契数列 。该数列由 0 和 1 开始，后面的每一项数字都是前面两项数字的和。也就是：
//F(0) = 0，F(1) = 1
//F(n) = F(n - 1) + F(n - 2)，其中 n > 1
//给定 n ，请计算 F(n) 。
//辅助：
//

//
//#include<iostream>
//using namespace std;
//#include<vector>
//
//class Solution {
//public:
//    int fib(int n) {
//        if (n == 0)
//        {
//            return 0;
//        }
//        else if (n == 1)
//        {
//            return 1;
//        }
//        else
//        {
//            vector<int> dp(n+1);
//            dp[0] = 0;
//            dp[1] = 1;
//            for (int i = 2; i <= n; i++)
//            {
//                dp[i] = dp[i - 1] + dp[i - 2];
//            }
//            return dp[n];
//
//        }
//
//    }
//};
//
//
//int main()
//{
//
//    Solution sol;
//    cout << sol.fib(3) << endl;
//
//}