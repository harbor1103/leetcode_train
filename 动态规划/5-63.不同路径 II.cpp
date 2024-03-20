//```题目描述：
//题目来源
//https ://leetcode.cn/problems/unique-paths-ii/description/
//题目描述
//一个机器人位于一个 m x n 网格的左上角 （起始点在下图中标记为 “Start” ）。
//
//机器人每次只能向下或者向右移动一步。机器人试图达到网格的右下角（在下图中标记为 “Finish”）。
//
//现在考虑网格中有障碍物。那么从左上角到右下角将会有多少条不同的路径？
//
//网格中的障碍物和空位置分别用 1 和 0 来表示。
//辅助：
//
//```


//#include<iostream>
//using namespace std;
//#include<vector>
//
//class Solution {
//public:
//    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
//		int m = obstacleGrid.size();//行
//		int n = obstacleGrid[0].size();//列
//		vector<vector<int>> dp(m, vector<int>(n, 0));
//		for (int i = 0; i < m && obstacleGrid[i][0] == 0; i++) dp[i][0] = 1;
//		for (int i = 0; i < n && obstacleGrid[0][i] == 0; i++) dp[0][i] = 1;
//
//		for(int i=1;i<m;i++)
//			for (int j = 1; j < n; j++)
//			{
//				if (obstacleGrid[i][j] == 1)
//				{
//					continue;
//				}
//				else
//					dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
//			}
//
//		return dp[m - 1][n - 1];
//    }
//};
//
//
//int main()
//{
//    Solution s;
//	vector<vector<int>> obstacleGrid = { {0,0,0},{0,1,0},{0,0,0} };
//	cout << s.uniquePathsWithObstacles(obstacleGrid) << endl;
//	return 0;
//
//
//}