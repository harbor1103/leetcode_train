////```��Ŀ������
////��Ŀ��Դ
////https ://leetcode.cn/problems/climbing-stairs/
////��Ŀ����
////������������¥�ݡ���Ҫ n ������ܵ���¥����
////ÿ��������� 1 �� 2 ��̨�ס����ж����ֲ�ͬ�ķ�����������¥���أ�
////
////������
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