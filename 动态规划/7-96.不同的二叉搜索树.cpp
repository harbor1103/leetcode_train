//```��Ŀ������
//��Ŀ��Դ
//https://leetcode.cn/problems/unique-binary-search-trees/description/
//��Ŀ����
//����һ������ n ����ǡ�� n ���ڵ�����ҽڵ�ֵ�� 1 �� n ������ͬ�� ���������� �ж����֣�������������Ķ�����������������
//������
//
//```

//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//
//
//class Solution {
//public:
//    int numTrees(int n) {
//		vector<int> dp(n + 1, 0);
//		dp[0] = 1;
//		dp[1] = 1;
//		for (int i = 2; i <= n; i++)
//		{
//			for (int j = 1; j <= i; j++)
//			{
//				dp[i]+= dp[j - 1] * dp[i - j];
//			}
//		}
//
//		return dp[n];
//    }
//};
//
//
//int main() {
//	Solution s;
//	cout << s.numTrees(3) << endl;
//	return 0;
//}