//
//### 3 - 746.ʹ����С������¥��
//
//```��Ŀ������
//��Ŀ��Դ
//https ://leetcode.cn/problems/min-cost-climbing-stairs/description/
//��Ŀ����
//����һ���������� cost ��
// ���� cost[i] �Ǵ�¥�ݵ� i ��̨����������Ҫ֧���ķ��á�
// 
// һ����֧���˷��ã�����ѡ��������һ����������̨�ס�
//
//�����ѡ����±�Ϊ 0 ���±�Ϊ 1 ��̨�׿�ʼ��¥�ݡ�
//
//������㲢���شﵽ¥�ݶ�������ͻ��ѡ�
//
//������

//
//#include<iostream>
//using namespace std;
//#include<vector>
//
//
//
//class Solution {
//public:
//    int minCostClimbingStairs(vector<int>& cost) {
//        int len = cost.size();
//        vector<int> dp(len+1,0);
//
//        for (int i = 2; i <= len; i++)
//        {
//            		dp[i] = min(dp[i - 1] + cost[i - 1], dp[i - 2] + cost[i - 2]);
//        }
//
//        return dp[len];
//
//
//    }
//};
//
//
//
//int main()
//{
//
//    Solution sol;
//    vector<int> a = {1,2,3};
//
//    cout<<sol.minCostClimbingStairs(a)<<endl;
//
//
//}
