//#include<iostream>
//using namespace std;
//#include<vector>
//
//
//
//class Solution {
//public:
//    int lengthOfLIS(vector<int>& nums) {
//        int N = nums.size();
//        if (N == 1)
//            return 1;
//        vector<int> dp(N, 1);
//        dp[0] = 1;
//        int maxN = 0;
//        for (int i = 1; i < N; ++i)
//        {
//            for (int j = 0; j < i; j++)
//            {
//                if (nums[i] > nums[j])
//                {
//                    dp[i] = max(dp[i], dp[j] + 1);
//                }
//            }
//            if (dp[i] > maxN)
//                maxN = dp[i];
//        }
//        return maxN;
//    }
//};