////https://leetcode.cn/problems/get-maximum-in-generated-array/description/
//#include<vector>
//#include<algorithm>
//using namespace std;
//#include<iostream>
//
//class Solution {
//public:
//    int getMaximumGenerated(int n) {
//        vector<int> dp(n + 1);
//        if (n == 0)
//        {
//            return 0;
//        }
//        dp[0] = 0;
//        dp[1] = 1;
//        for (int i = 1; i <= n + 1; i++)
//        {
//            if (2 * i >= 2 && 2 * i <= n)
//            {
//                dp[2 * i] = dp[i];
//            }
//            if (((2 * i) + 1) >= 2 && ((2 * i) + 1) <= n)
//            {
//                dp[(2 * i) + 1] = dp[i] + dp[i + 1];
//            }
//        }
//        return *max_element(dp.begin(), dp.end());
//    }
//};
//int main()
//{
//    Solution sol;
//    int ret= sol.getMaximumGenerated(7) ;
//    cout << ret << endl;
//}