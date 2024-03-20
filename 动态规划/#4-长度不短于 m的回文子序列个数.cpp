//#include <iostream>
//#include <vector>
//using namespace std;
//
//int countPalindromicSubsequences(const string& s, int m) {
//    int n = s.length();
//
//    // 创建一个二维数组dp，用于存储回文子序列个数
//    vector<vector<int>> dp(n, vector<int>(n, 0));
//
//    // 对角线上的单个字符是回文子序列，初始化为1
//    for (int i = 0; i < n; ++i) {
//        dp[i][i] = 1;
//    }
//
//    // 遍历长度为2到n的子序列长度
//    for (int cl = 2; cl <= n; ++cl) {
//        for (int i = 0; i <= n - cl; ++i) {
//            int j = i + cl - 1;
//
//            // 如果子序列两端字符相同
//            if (s[i] == s[j]) {
//                // 子序列长度为2时，直接加2
//                if (cl == 2) {
//                    dp[i][j] = 2;
//                }
//                else {
//                    // 否则，在两端字符相同的情况下，加上两端字符之间长度减2的子序列个数
//                    dp[i][j] = dp[i + 1][j - 1] + 2;
//                }
//            }
//            else {
//                // 如果两端字符不同，则分别计算去掉左端字符和去掉右端字符的两种情况
//                dp[i][j] = dp[i][j - 1] + dp[i + 1][j] - dp[i + 1][j - 1];
//            }
//
//            // 将负数结果变为正数
//            dp[i][j] = max(dp[i][j], 0);
//        }
//    }
//
//    // 统计长度不短于m的回文子序列个数
//    int count = 0;
//    for (int i = 0; i < n; ++i) {
//        for (int j = i; j < n; ++j) {
//            if (j - i + 1 >= m) {
//                count += dp[i][j];
//            }
//        }
//    }
//
//    return count;
//}
//
//
//int countPalindromicSubsequences2(const string& s, int m) {
//    int n = s.length();
//
//    vector<vector<bool>> dp(n + 1, vector<bool>(n + 1, false));
//    int ret = 0;
//    int mret = 0;
//        for (int i = n - 1; i >= 0; i--)
//        {
//            for (int j = i; j < n; j++)
//            {
//                if (s[i] == s[j])
//                {
//                    if ((j - i) <= 1)
//                    {
//                        ret++;
//                        dp[i][j] = true;
//                        if ((j - i)+1 >= m)
//                        {
//                            mret++;
//                        }
//
//                    }
//                    else  if (dp[i + 1][j - 1] == true)
//                    {
//                        ret++;
//                        dp[i][j] = true;
//                        if ((j - i)+1 >= m)
//                        {
//                            mret++;
//                        }
//                    }
//                }
//            }
//        }
//    return mret;
//}
//
//
//
//
//
//
//
//int main() {
//    string s = "abbb";
//    int m = 2;
//    //int result = countPalindromicSubsequences(s, m);
//    int result2 = countPalindromicSubsequences2(s, m);
//
//    //cout << "长度不短于" << m << "的回文子序列个数为：" << result << endl;
//
//    cout << "长度不短于" << m << "的回文子序列个数为：" << result2 << endl;
//
//    return 0;
//}