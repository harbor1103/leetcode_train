////爬楼梯最小成本
////https://leetcode.cn/problems/GzCJIP/
//
////动态规划
//#include<iostream>
//using namespace std;
//#include<vector>
//
//
//
//class Solution {
//#define maxn 100000
//    int number[maxn];
//public:
//    int minCostClimbingStairs(vector<int>& cost) {
//        size_t n=cost.size();
//        number[0] = 0;
//        number[1] = 0;
//        for (int i = 2; i <= n; i++)
//        {
//            number[i] = min(number[i - 1] + cost[i - 1], number[i - 2] + cost[i - 2]);
//        }
//        return number[n];
//    }
//};
//
//
//
//int main()
//{
//
//    Solution a;
//    vector<int> cost = { 1, 100, 1, 1, 1, 100, 1, 1, 100, 1 };
//    int ret=a.minCostClimbingStairs(cost);
//    cout<<ret<<endl;
//
//}
