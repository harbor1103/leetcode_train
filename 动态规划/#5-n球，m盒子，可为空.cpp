

//
//#include <cstdio>
//#include<iostream>
//using namespace std;
//const int N = 1005;
//int n, m, f[N][N];
//int main()
//{
//    n = 7, m = 3;   
//    for (int i = 1; i <= n; i++) f[i][1] = 1;       
//    for (int i = 1; i <= m; i++)
//    {
//        f[1][i] = 1;
//        f[0][i] = 1;
//    }
//
//
//    for (int i = 2; i <= n; i++)
//    {
//        for (int j = 2; j <= m; j++)
//        {
//            
//            if (i >= j)
//            {
//                f[i][j] = f[i ][j -1] + f[i - j][j];
//            }
//            else
//            {
//				f[i][j] = f[i][i];
//			}
//        }
//    }
//           
//    printf("%d\n", f[n][m]);                                            
//    return 0;
//}