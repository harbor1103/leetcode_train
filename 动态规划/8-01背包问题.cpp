//#include<iostream>
//using namespace std;
//#include <vector>
//
//
//int main() {
//	
//	int w = 6;
//	int weight[5] = { 2,2,3,1,5 };
//	int n=sizeof(weight)/sizeof(weight[0]);
//	int value[5] = { 2,3,1,5,4 };
//
//
//	vector<vector<int>> dp(n, vector<int>(w+1, 0));
//
//	for (int i = 0; i < w; i++)
//	{
//		if (weight[0] <= i)
//		{
//			dp[0][i] = value[0];
//
//		}
//		else
//		{
//			dp[0][i] = 0;
//		}
//	}	
//
//	for (int i = 0; i < n; i++)
//	{
//		dp[i][0]=0;
//	}
//	int maxNum = 0;
//	for (int i = 1; i < n;i++)
//	{
//		for (int j = 0; j < w; j++)
//		{
//
//
//			if (weight[i] > j)
//			{
//				dp[i][j] = dp[i - 1][j];
//			}
//			else
//			{ 
//			dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weight[i]] + value[i]);
//			
//			
//			}
//			if (dp[i][j]>maxNum)
//			{
//				maxNum=dp[i][j];
//			}
//		
//		}
//	}
//
//	cout<<maxNum<<endl;
//
//}	