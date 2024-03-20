//#include<iostream>
//using namespace std;
//#include<vector>
//
//
//int main()
//{
//	vector<int> weight = {1,2,3,2,1};
//	vector<int> value = { 1,2,3,1,2 };
//	int bagSize = 7;
//
//	vector<int> dp(bagSize + 1, 0);
//
//	for (int i = 0; i < weight.size(); i++)
//	{
//		for (int j = bagSize; j >= weight[i]; j--)
//		{
//			dp[j] = max(dp[j], dp[j - weight[i]] + value[i]);
//		}
//	}
//
//
//}