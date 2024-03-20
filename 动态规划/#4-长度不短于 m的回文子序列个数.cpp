//#include <iostream>
//#include <vector>
//using namespace std;
//
//int countPalindromicSubsequences(const string& s, int m) {
//    int n = s.length();
//
//    // ����һ����ά����dp�����ڴ洢���������и���
//    vector<vector<int>> dp(n, vector<int>(n, 0));
//
//    // �Խ����ϵĵ����ַ��ǻ��������У���ʼ��Ϊ1
//    for (int i = 0; i < n; ++i) {
//        dp[i][i] = 1;
//    }
//
//    // ��������Ϊ2��n�������г���
//    for (int cl = 2; cl <= n; ++cl) {
//        for (int i = 0; i <= n - cl; ++i) {
//            int j = i + cl - 1;
//
//            // ��������������ַ���ͬ
//            if (s[i] == s[j]) {
//                // �����г���Ϊ2ʱ��ֱ�Ӽ�2
//                if (cl == 2) {
//                    dp[i][j] = 2;
//                }
//                else {
//                    // �����������ַ���ͬ������£����������ַ�֮�䳤�ȼ�2�������и���
//                    dp[i][j] = dp[i + 1][j - 1] + 2;
//                }
//            }
//            else {
//                // ��������ַ���ͬ����ֱ����ȥ������ַ���ȥ���Ҷ��ַ����������
//                dp[i][j] = dp[i][j - 1] + dp[i + 1][j] - dp[i + 1][j - 1];
//            }
//
//            // �����������Ϊ����
//            dp[i][j] = max(dp[i][j], 0);
//        }
//    }
//
//    // ͳ�Ƴ��Ȳ�����m�Ļ��������и���
//    int count = 0;
//    for (int i = 0; i < n; ++i) {
//        for (int j = i; j < n; ++j) {
//            if (j - i + 1 >= m) {
//                count += dp[i][j];
//            }
//        }
//    }
//
//    return count;
//}
//
//
//int countPalindromicSubsequences2(const string& s, int m) {
//    int n = s.length();
//
//    vector<vector<bool>> dp(n + 1, vector<bool>(n + 1, false));
//    int ret = 0;
//    int mret = 0;
//        for (int i = n - 1; i >= 0; i--)
//        {
//            for (int j = i; j < n; j++)
//            {
//                if (s[i] == s[j])
//                {
//                    if ((j - i) <= 1)
//                    {
//                        ret++;
//                        dp[i][j] = true;
//                        if ((j - i)+1 >= m)
//                        {
//                            mret++;
//                        }
//
//                    }
//                    else  if (dp[i + 1][j - 1] == true)
//                    {
//                        ret++;
//                        dp[i][j] = true;
//                        if ((j - i)+1 >= m)
//                        {
//                            mret++;
//                        }
//                    }
//                }
//            }
//        }
//    return mret;
//}
//
//
//
//
//
//
//
//int main() {
//    string s = "abbb";
//    int m = 2;
//    //int result = countPalindromicSubsequences(s, m);
//    int result2 = countPalindromicSubsequences2(s, m);
//
//    //cout << "���Ȳ�����" << m << "�Ļ��������и���Ϊ��" << result << endl;
//
//    cout << "���Ȳ�����" << m << "�Ļ��������и���Ϊ��" << result2 << endl;
//
//    return 0;
//}