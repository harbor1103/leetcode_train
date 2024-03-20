////https://leetcode.cn/problems/decode-ways/description/
//
////a b c d e f g h i j   k   l    m   n   o   p   q   r   s   t   u    v    w   x    y    z
////1 2 3 4 5 6 7 8 9 10  11  12   13  14  15  16  17  18  19  20  21   22   23  24   25   26
//
////s = "226"
////
////s = "06"
//
//#include<iostream>
//using namespace std;
//#include<vector>
//
//class Solution {
//public:
//    int numDecodings(string s) {
//        vector<int> dp(s.size() + 1);
//        dp[0] = 1;
//        for (int i = 1; i <= s.size(); i++)
//        {
//            if (s[i - 1] != '0')
//            {
//                dp[i]+= dp[i - 1];
//            }
//            if (i>1&& s[i-2]!='0'&& ((s[i-2]-'0')+(s[i-1]-'0'))<=26)
//            {
//				dp[i]+= dp[i - 2];
//			}
//        }
//        return dp[s.size()];
//    }
//};
//
//
//////作者：改进状态空间版本
////class Solution {
////public:
////    int numDecodings(string s) {
////        int n = s.size();
////        // a = f[i-2], b = f[i-1], c = f[i]
////        int a = 0, b = 1, c;
////        for (int i = 1; i <= n; ++i) {
////            c = 0;
////            if (s[i - 1] != '0') {
////                c += b;
////            }
////            if (i > 1 && s[i - 2] != '0' && ((s[i - 2] - '0') * 10 + (s[i - 1] - '0') <= 26)) {
////                c += a;
////            }
////            tie(a, b) = { b, c };
////        }
////        return c;
////    }
////};
////
////作者：力扣官方题解
////链接：https ://leetcode.cn/problems/decode-ways/description/
////来源：力扣（LeetCode）
////著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
//
//
//
//int main()
//{
//    Solution sol;
//    int ret=sol.numDecodings("226");
//	cout << ret << endl;    
//}
//
//
//
//
//
//
