//```��Ŀ������
//��Ŀ��Դ
//https://leetcode.cn/problems/integer-break/description/
//��Ŀ����
//����һ�������� n ��������Ϊ k �� ������ �ĺͣ� k >= 2 ������ʹ��Щ�����ĳ˻���󻯡�
//
//���� ����Ի�õ����˻� ��
//������
//
//```

//#include<iostream>
//using namespace std;
//#include<vector>
//
//
//
//
//
//class Solution {
//public:
//    int integerBreak(int n) {
//
//        vector<int> dp(n + 1, 0);
//
//        for (int i = 2; i <= n; i++)
//        {
//            for (int j = 1; j < i; j++)
//            {
//                dp[i] = max(dp[i], max(j * (i - j), j * dp[i - j]));
//            }
//        }
//
//        return dp[n];
//    }
//};
//
//
//
//int main()
//{
//    Solution sol;
//    cout<< sol.integerBreak(5) << endl;
//
//
//}