////https://leetcode.cn/problems/count-square-submatrices-with-all-ones/
//
//
////其前置题：最大正方形
////https://leetcode.cn/problems/maximal-square/description/
//
//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//
//////最大正方形题解如下：
////class solution {
////public:
////    int maximalsquare(vector<vector<char>>& matrix) {
////        if ((matrix.size() == 0) || (matrix[0].size() == 0))
////        {
////			return 0;
////		}
////         int hang=matrix.size();
////         int lie=matrix[0].size();
////
////         int maxret = 0;
////
////         std::vector<std::vector<int>> dp;
////
////         dp.resize(hang, vector<int>(lie));
////
////
////         for (int i = 0; i < hang; i++)
////         {
////             for (int j = 0; j < lie; j++)
////             {
////                 if (matrix[i][j] == '1')
////                 {
////                     if (i == 0 || j == 0)
////                     {
////                         dp[i][j] = 1;
////                     }
////                     else
////                     {
////                         dp[i][j]+=min(min(dp[i - 1][j], dp[i][j - 1]), dp[i - 1][j - 1]) + 1;
////                     }
////                     maxret = max(maxret, dp[i][j]);
////
////                 }
////
////             }
////
////         }
////
////         return maxret* maxret;
////
////    }
////};
////
//
//
//
//class Solution {
//public:
//    int countSquares(vector<vector<int>>& matrix) {
//
//        if ((matrix.size() == 0) || (matrix[0].size() == 0))
//        {
//            return 0;
//        }
//        int hang = matrix.size();
//        int lie = matrix[0].size();
//
//
//        std::vector<std::vector<int>> dp;
//
//        dp.resize(hang, vector<int>(lie));
//
//        int sum = 0;
//        for (int i = 0; i < hang; i++)
//        {
//            for (int j = 0; j < lie; j++)
//            {
//                if (matrix[i][j] == 1)
//                {
//                    if (i == 0 || j == 0)
//                    {
//                        dp[i][j] = 1;
//                    }
//                    else
//                    {
//                        dp[i][j] += min(min(dp[i - 1][j], dp[i][j - 1]), dp[i - 1][j - 1]) + 1;
//                    }
//                    sum+= dp[i][j];
//                }
//            }
//        }    
//        return sum;
//    }
//};
//
//
//
//int main()
//{
//    Solution sol;
//    
//
//
//}