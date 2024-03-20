//```题目描述：
//https ://www.luogu.com.cn/problem/P1595
//某人写了 n 封信和 n 个信封，如果所有的信都装错了信封。求所有信都装错信封共有多少种不同情况。
//
//编程答案：
//https ://www.bilibili.com/video/BV1c64y1f7XY/?spm_id_from=333.337.search-card.all.click&vd_source=b0ad7a11a35f6bb99c79b79b455563fa
//
//概率论讲解：
//https ://www.bilibili.com/video/BV19W4y1S77m/?spm_id_from=333.788.top_right_bar_window_history.content.click&vd_source=b0ad7a11a35f6bb99c79b79b455563fa
//
//```

//
//
//#include<iostream>
//using namespace std;
//#include<vector>
//
//int Cuo_Wei_Pai_Xu(int n)
//{
//	vector<int> dp(n+1, 0);
//	dp[0] = 0;
//	dp[1]=0;
//	dp[2]=1;
//
//	for (int i = 3; i <= n; i++)
//	{
//		dp[i] = (i - 1) * (dp[i - 1] + dp[i - 2]);
//	}
//
//
//
//	return  dp[n];
//}
//
//
//
//int main()
//{
//	int n = 3;
//
//	int ret = Cuo_Wei_Pai_Xu(n);
//
//	cout << "当 n = " << n << " 时，错位排序结果为" << ret << endl;
//	return 0;
//}
