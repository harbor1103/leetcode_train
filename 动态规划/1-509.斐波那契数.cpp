//```��Ŀ������
//��Ŀ��Դ
//https ://leetcode.cn/problems/fibonacci-number/description/
//��Ŀ����
//쳲������� ��ͨ���� F(n) ��ʾ���γɵ����г�Ϊ 쳲��������� ���������� 0 �� 1 ��ʼ�������ÿһ�����ֶ���ǰ���������ֵĺ͡�Ҳ���ǣ�
//F(0) = 0��F(1) = 1
//F(n) = F(n - 1) + F(n - 2)������ n > 1
//���� n ������� F(n) ��
//������
//

//
//#include<iostream>
//using namespace std;
//#include<vector>
//
//class Solution {
//public:
//    int fib(int n) {
//        if (n == 0)
//        {
//            return 0;
//        }
//        else if (n == 1)
//        {
//            return 1;
//        }
//        else
//        {
//            vector<int> dp(n+1);
//            dp[0] = 0;
//            dp[1] = 1;
//            for (int i = 2; i <= n; i++)
//            {
//                dp[i] = dp[i - 1] + dp[i - 2];
//            }
//            return dp[n];
//
//        }
//
//    }
//};
//
//
//int main()
//{
//
//    Solution sol;
//    cout << sol.fib(3) << endl;
//
//}