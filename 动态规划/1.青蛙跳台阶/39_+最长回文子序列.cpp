////https://leetcode.cn/problems/longest-palindromic-subsequence/description/
//
////��Ƶ����:
////https://www.bilibili.com/video/BV1d8411K7W6/?vd_source=b0ad7a11a35f6bb99c79b79b455563fa
////
//
//#include<iostream>
//using namespace std;
//#include<vector>
//
//class Solution {
//public:
//    int longestPalindromeSubseq(string s) {
//        int n = s.size();
//        vector<vector<int>> dp(n,vector<int> (n,0));
//        for (int i = n - 1; i >= 0; i--)
//        {
//            dp[i][i] = 1;
//            for (int j = i + 1; j < n; j++)
//            {
//                if (s[i] == s[j])
//                {
//                    dp[i][j] = dp[i + 1][j - 1] + 2;
//                }
//                else
//                {
//					dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
//                }
//            }
//
//
//        }
//
//
//        return dp[0][n - 1];
//
//
//    }
//};
//
//int main()
//{
//    Solution s;
//    cout<<s.longestPalindromeSubseq("bbbab")<<endl;
//
//
//
//}