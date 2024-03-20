//
//
//
//public static int ways2(String s) {
//    if (s == null || s.length() == 0) {
//        return 0;
//    }
//    char[] str = s.toCharArray();
//    int n = str.length;
//    int[][] dp = new int[n][n];
//    // 对角线都是1
//    for (int i = 0; i < n; i++) {
//        dp[i][i] = 1;
//    }
//    for (int i = 0; i < n - 1; i++) {
//        if (str[i] == str[i + 1])
//            dp[i][i + 1] = 3 : 2;
//        else
//        {
//            dp[i][i + 1] = 2;
//        }
//
//    }
//    for (int i = n - 3; i >= 0; i--) {
//        for (int j = i + 2; j < n; j++) {
//
//            if (str[i] == str[j])
//            {
//                dp[i][j] = （dp[i + 1][j] + dp[i][j - 1] - dp[i + 1][j - 1] ）
//                    +
//                    (dp[i + 1][j - 1] + 1);
//            }
//            else
//            {
//                dp[i][j] = dp[i + 1][j] + dp[i][j - 1] - dp[i + 1][j - 1];
//            }
//
//
//        }
//    }
//    return dp[0][n - 1];
//}
