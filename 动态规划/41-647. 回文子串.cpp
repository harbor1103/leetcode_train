//#include<iostream>
//#include<vector>
//using namespace std;
//#include<string>
//
//
//class Solution {
//public:
//    int countSubstrings(string s) {
//        int n = s.size();
//        vector<vector<bool>> dp(n+1, vector<bool>(n+1,false));
//
//
//
//        int ret = 0;
//        for (int i = n-1; i >= 0; i--)
//        {
//            for (int j = i; j < n; j++)
//            {
//                if (s[i] == s[j])
//                {
//                    if ((j - i) <= 1)
//                    {
//                        ret++;
//;                       dp[i][j] = true;
//                    }
//                    else if(
//                        dp[i][j] = dp[i + 1][j - 1])
//                    {
//                        					ret++;
//						dp[i][j] = true;
//					}
//
//
//                }
//
//            }
//        }
//
//
//        return ret;
//
//
//    }
//};