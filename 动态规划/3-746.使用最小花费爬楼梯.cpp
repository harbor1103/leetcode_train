//
//### 3 - 746.使用最小花费爬楼梯
//
//```题目描述：
//题目来源
//https ://leetcode.cn/problems/min-cost-climbing-stairs/description/
//题目描述
//给你一个整数数组 cost ，
// 其中 cost[i] 是从楼梯第 i 个台阶向上爬需要支付的费用。
// 
// 一旦你支付此费用，即可选择向上爬一个或者两个台阶。
//
//你可以选择从下标为 0 或下标为 1 的台阶开始爬楼梯。
//
//请你计算并返回达到楼梯顶部的最低花费。
//
//辅助：

//
//#include<iostream>
//using namespace std;
//#include<vector>
//
//
//
//class Solution {
//public:
//    int minCostClimbingStairs(vector<int>& cost) {
//        int len = cost.size();
//        vector<int> dp(len+1,0);
//
//        for (int i = 2; i <= len; i++)
//        {
//            		dp[i] = min(dp[i - 1] + cost[i - 1], dp[i - 2] + cost[i - 2]);
//        }
//
//        return dp[len];
//
//
//    }
//};
//
//
//
//int main()
//{
//
//    Solution sol;
//    vector<int> a = {1,2,3};
//
//    cout<<sol.minCostClimbingStairs(a)<<endl;
//
//
//}
