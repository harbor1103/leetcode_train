////https://leetcode.cn/problems/JEj789/
//
//#include<iostream>
//using namespace std;
//#include<vector>
//
//class Solution {
//public:
//    int minCost(vector<vector<int>>& costs) {
//        int hang = costs.size();
//        int lie = costs[0].size();
//       vector<int> dp(3,0);
//        dp[0]=costs[0][0];
//        dp[1]=costs[0][1];
//        dp[2]=costs[0][2];
//        for (int i = 1; i < hang; i++)
//        {
//            vector<int> updatedp(3, 0);
//            updatedp[0]=min(dp[1],dp[2])+costs[i][0];
//            updatedp[1]=min(dp[0],dp[2])+costs[i][1];
//            updatedp[2]=min(dp[0],dp[1])+costs[i][2];
//            dp = updatedp;
//        }
//        return min(dp[0], min(dp[1], dp[2]));
//
//    }
//};
//
//
//int main()
//{
//    Solution sol;
//    vector<vector<int>> costs={{17,2,17},{16,16,5},{14,3,19}};
//    int ret = sol.minCost(costs);
//    cout << ret << endl;
//
//}