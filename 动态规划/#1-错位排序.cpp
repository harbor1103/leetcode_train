//```��Ŀ������
//https ://www.luogu.com.cn/problem/P1595
//ĳ��д�� n ���ź� n ���ŷ⣬������е��Ŷ�װ�����ŷ⡣�������Ŷ�װ���ŷ⹲�ж����ֲ�ͬ�����
//
//��̴𰸣�
//https ://www.bilibili.com/video/BV1c64y1f7XY/?spm_id_from=333.337.search-card.all.click&vd_source=b0ad7a11a35f6bb99c79b79b455563fa
//
//�����۽��⣺
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
//	cout << "�� n = " << n << " ʱ����λ������Ϊ" << ret << endl;
//	return 0;
//}
