////https://leetcode.cn/problems/longest-arithmetic-subsequence/
//
//
//#include<iostream>
//using namespace std;
//#include<vector>
//
//
//
//class Solution {
//public:
//    int longestArithSeqLength(vector<int>& nums) {
//        int len = nums.size();
//        if (len < 2)
//        {
//            return len;
//        }
//        vector<vector<int>> dp(len, vector<int>(1001, 0));
//        int maxret = 0;
//        for (int i = 1; i < len; i++)
//        {
//            for (int j = 0; j < i; j++)
//            {
//                int diff = nums[i] - nums[j] + 500;
//                dp[i][diff] = dp[j][diff] + 1;
//                maxret = max(maxret, dp[i][diff]);
//            }
//        }
//
//        return maxret + 1;
//
//    }
//};
//
//
//int main()
//{
//    Solution sol;
//    vector<int> nums = { 1,2,3,4 };
//    cout << sol.longestArithSeqLength(nums) << endl;
//
//
//}