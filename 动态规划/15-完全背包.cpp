//#include<iostream>
//#include<vector>
//using namespace std;
//
//
////�ȱ�����Ʒ���ٱ�������
//void test_CompletePack_1() {
//	vector<int> weight = { 1, 3, 4 };
//	vector<int> value = { 15, 20, 30 };
//	int bagWeight = 4;
//
//	vector<int> dp(weight.size() + 1, 0);
//
//	for (int i = 0; i < weight.size(); ++i)
//	{
//		for (int j = weight[i]; j <= bagWeight; ++j)
//		{
//			dp[j] = max(dp[j], dp[j - weight[i]] + value[i]);
//		}
//	}
//
//	cout<<dp[bagWeight]<<endl;
//}
//
//
////�ȱ����������ٱ�����Ʒ
//void test_CompletePack_2() {
//	vector<int> weight = { 1, 3, 4 };
//	vector<int> value = { 15, 20, 30 };
//	int bagWeight = 4;
//
//	vector<int> dp(bagWeight + 1, 0);
//
//	for (int j = 0; j < bagWeight; ++j)
//	{
//		for (int i = 0; i < weight.size(); ++i)
//		{
//			if (j >= weight[i])
//			{
//				dp[j] = max(dp[j], dp[j - weight[i]] + value[i]);
//			}
//			
//		}
//	}
//
//	cout << dp[bagWeight] << endl;
//
//}
//
//int main()
//{
//
//
//
//
//}