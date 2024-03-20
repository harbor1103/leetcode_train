//// 题目地址
////https://leetcode.cn/problems/number-of-steps-to-reduce-a-number-to-zero/
//#include<iostream>
//using namespace std;
//#define maxn 100000
//
//
//class Solution {
//
//private:
//    int count[maxn];
//
//public:
//    int numberOfSteps(int num) {
//        int ret = 0;
//        if (num == 0)
//        {
//            return 0;
//        }
//        for (int i = num; i > 0;)
//        {
//            if (i % 2 == 0)
//            {
//				i = i / 2;
//				ret++;
//			}
//            else
//            {
//				i = i - 1;
//				ret++;
//			}
//        }
//        return ret;
//    }
//
//
//
//    //动态规划写法
//    int numberOfSteps_2(int num)
//    {
//        count[0] = 0;
//        for (int i = 1; i <= num; i++)
//        {
//            if (i % 2 == 1)
//            {
//                count[i] = count[i - 1] + 1;
//             }
//            else
//            {
//                count[i] = count[i / 2] + 1;
//            }
//        }
//        return count[num];
//    }
//};
//
//
//
//
//int main()
//{
//
//    Solution sol=Solution();
//    int input;
//    scanf_s("%d", &input);
//    int ret=sol.numberOfSteps_2(input);
//    printf("%d", ret);
//}