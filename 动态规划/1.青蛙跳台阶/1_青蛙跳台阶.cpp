//
////���� ��̨�� һ�ο�����1������2��  ������n��̨���ж����ַ���
////https://leetcode.cn/problems/qing-wa-tiao-tai-jie-wen-ti-lcof/
//
//// ˼·����̬�滮���
////https://leetcode.cn/problems/qing-wa-tiao-tai-jie-wen-ti-lcof/solutions/101617/mian-shi-ti-10-ii-qing-wa-tiao-tai-jie-wen-ti-dong/
//#define mod 1000000007
//#include <iostream>
//using namespace std;
//
//
//class Solution {        
//public:
//    int trainWays(int num) {
//        int n0 = 1, n1 = 1, sum;
//        for (int i = 1; i <=num; i++)
//        {
//            sum=(n0+n1) % mod;
//            n0 = n1;
//            n1 = sum;
//        }
//        return n0;
//
//    }
//};
//
//
//
//int main()
//{
//
//    Solution sol=Solution();
//    cout<<sol.trainWays(2)<<endl;
//    cout << sol.trainWays(3) << endl;
//
//}