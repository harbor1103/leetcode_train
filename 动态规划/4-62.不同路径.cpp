//```��Ŀ������
//��Ŀ��Դ
//https ://leetcode.cn/problems/unique-paths/description/
//��Ŀ����
//һ��������λ��һ�� m x n ��������Ͻ� ����ʼ������ͼ�б��Ϊ ��Start�� ����
//
//������ÿ��ֻ�����»��������ƶ�һ������������ͼ�ﵽ��������½ǣ�����ͼ�б��Ϊ ��Finish�� ����
//
//���ܹ��ж�������ͬ��·����
//
//������
//
//```

//#include<iostream>
//using namespace std;
//#include<vector>
//
//class Solution {
//public:
//    int uniquePaths(int m, int n) {
//        vector<vector<int>> dp(m, vector<int>(n));
//        for (int i = 0; i < m; i++)
//        {
//            dp[i][0] = 1;
//        }
//        for (int i = 0; i < n; i++)
//        {
//            dp[0][i] = 1;
//        }
//        for (int i = 1; i < m; i++)
//        {
//            for (int j = 1; j < n; j++)
//            {
//                dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
//            }
//        }
//
//        return dp[m - 1][n - 1];
//    }
//};
//
//
//int main()
//{
//    Solution sol;
//    cout<<sol.uniquePaths(3,7)<<endl;
//
//}