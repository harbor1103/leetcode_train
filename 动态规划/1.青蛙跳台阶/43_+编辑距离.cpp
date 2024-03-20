////
////视频讲解：
////https ://www.bilibili.com/video/BV1qv4y1q78f/?spm_id_from=333.788.top_right_bar_window_history.content.click
////
////题目：https://leetcode.cn/problems/edit-distance/solutions/6455/zi-di-xiang-shang-he-zi-ding-xiang-xia-by-powcai-3/
//
//#include<iostream>
//using namespace std;
//#include<vector>
//
//
//class Solution {
//public:
//    int minDistance(string word1, string word2) {
//
//        int n1= word1.size();
//        int n2 = word2.size();
//
//        vector<vector<int>> dp(n1+1,vector<int> (n2+1,0));
//
//        for (int i = 1; i < n1 + 1; i++) dp[i][0] = i;
//        for(int j=1;j<n2+1;j++) dp[0][j]=j;
//
//        for(int i=1;i<=n1;i++)
//            for (int j = 1; j <= n2; j++)
//            {
//                if (word1[i - 1] == word2[j - 1])
//                {
//                    dp[i][j]=dp[i-1][j-1];
//                }
//                else
//                {
//                    dp[i][j]=min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]))+1;
//                }
//            }
//
//
//
//        return dp[n1][n2];
//    }
//};
//
//
//int main()
//{
//
//
//}
//
