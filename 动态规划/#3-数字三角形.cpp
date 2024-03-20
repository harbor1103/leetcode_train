//#include<iostream>
//using namespace std;
//#include<vector>
//
//
//int find_maximum_path(vector<vector<int>>& triangle) {
//    int rows = triangle.size();
//    int maxL = 0;
//    for (int i = 0; i < rows; i++)
//    {
//        int length= triangle[i].size();
//        if (length > maxL)maxL = length;
//    }
//    vector<vector<int>> dp(maxL, vector<int>(maxL, -1));
//    for (int i = 0; i < maxL; i++)
//    {
//        dp[rows-1][i]=triangle[rows-1][i];
//    }
//    for (int i = rows - 2; i >= 0; i--)
//    {
//        for (int j = 0; j < triangle[i].size(); j++)
//        {
//            dp[i][j]= max(dp[i + 1][j], dp[i + 1][j + 1]) + triangle[i][j];
//        }
//    }
//    return dp[0][0];
//}
//
//int main() {
//    // 输入示例
//    vector<vector<int>> triangle = {
//        {5},
//        {9, 6},
//        {2, 7, 3},
//        {1, 8, 4, 0}
//    };
//
//    // 调用函数并输出结果
//    int result = find_maximum_path(triangle);
//    cout << "自顶向下路径上所有数字的最大和是: " << result << endl;
//
//    return 0;
//}