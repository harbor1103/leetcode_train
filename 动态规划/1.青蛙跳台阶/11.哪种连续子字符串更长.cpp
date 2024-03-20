////https://leetcode.cn/problems/longer-contiguous-segments-of-ones-than-zeros/
//
//#include<string>
//#include<iostream>
//using namespace std;
//#include<vector>
//
//class Solution {
//public:
//    bool checkZeroOnes(string s) {
//        vector<int> dp(s.size() + 1);
//        dp[0] = 0;
//        dp[1]=1;
//        int max_One_number = 0;
//        int max_Zero_number = 0;
//
//        if (s.size() == 1)
//        {
//            if (s[0] == '1')
//            {
//                return true;
//            }
//            else
//            {
//                return false;
//            }
//        }
//
//        
//
//        for (int i = 2; i <= s.size(); i++)
//        {
//            if (s[i-1]=='0')
//            {
//                if (s[i-2]=='0')
//                {
//                    dp[i] = dp[i - 1] + 1;
//                    if (dp[i]>max_Zero_number)
//                    {
//						max_Zero_number = dp[i];
//					}
//                }
//                else
//                {
//                    dp[i]=1;
//                }
//            }
//            if (s[i - 1] == '1')
//            {
//                if (s[i - 2] == '1')
//                {
//                    dp[i] = dp[i - 1] + 1;
//                    if (dp[i] > max_One_number)
//                    {
//                        max_One_number = dp[i];
//                    }
//                }
//                else
//                {
//                    dp[i] = 1;
//                }
//            }
//        }
//         
//        if (max_One_number > max_Zero_number)
//        {
//			return true;
//		}
//        else
//        {
//			return false;
//		}
//
//    }
//};
//
//int main()
//{
//    Solution sol;
//    string s = "110100010";
//    bool ret=sol.checkZeroOnes(s);
//    cout << ret << endl;
//
//
//}