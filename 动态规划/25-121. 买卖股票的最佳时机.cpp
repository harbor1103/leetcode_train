//#include<iostream>
//using namespace std;
//#include<vector>
//
//
//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//        int len=prices.size();
//        vector<vector<int>> dp(len + 1, vector<int>(2,0));
//
//         //0��ʾ��ʱ�����й�Ʊ��1��ʾ��ʱ���й�Ʊ
//          dp[0][0]=0;
//          dp[0][1]=-prices[0];
//
//          int maxN = 0;
//          for (int i = 1; i < len; i++)
//          {
//              dp[i][0] = max((dp[i - 1][0]), (dp[i - 1][1] + prices[i]));
//              dp[i][1] = max(-prices[i],dp[i-1][1]);
//              
//              int ret = max(dp[i][0], dp[i][1]);
//              if (ret>maxN)
//              {
//				  maxN=ret;
//			  }
//
//          }
//          return maxN;
//    }
//};
//
//int main()
//{
//
//
//
//}