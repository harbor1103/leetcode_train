////计算将 m 个相同小球，放在 n 个相同盒子中（盒子不能为空）的方案数 f(m, n)；（m, n > 0）
////提示：m = 10, n = 3 有 8 种：
////{ 8, 1, 1 },
////{ 7, 2, 1 }, 
////{ 6, 3, 1 },
////{ 5, 4, 1 },
////{ 6, 2, 2 },
////{ 5, 3, 2 },
////{ 4, 4, 2 },
////{ 4, 3, 3 }
//
//#include <cstdio>
//#include<iostream>
//using namespace std;
//const int N = 1005;
//int n, m, f[N][N];
//int n, m, f[N][N];
//
//int main()
//{
//    n = 10, m = 3;
//    for (int i = 1; i <= n; i++)f[i][1] = 1;
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 2; j <= m; j++)
//        {
//
//            if (i >= j)
//            {
//                f[i][j] = f[i - 1][j - 1] + f[i - j][j];
//            }
//        }
//
//    }
//
//    printf("%d\n", f[n][m]);
//    return 0;
//}