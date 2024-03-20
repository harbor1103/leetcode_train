//#include<iostream>
//#include<vector>
//using namespace std;
//
//
//class Solution {
//public:
//    int findTargetSumWays(vector<int>& nums, int target) {
//        int sum = 0;
//        for (int i = 0; i < nums.size(); i++) sum += nums[i];
//        int left=(sum+target)/2;
//        if (((sum + target) % 2) == 1)
//        {
//            return 0;
//        }
//        if (abs(target) > sum)
//        {
//            return 0;
//        }
//		vector<int> dp(left + 1, 0);
//
//        dp[0] = 1;
//        for (int i = 0; i < nums.size(); i++)
//        {
//            for (int j = left; j >= nums[i]; j--)
//            {
//                dp[j] += dp[j - nums[i]];
//            }
//        }
//
//        return dp[left];
//        
//    }
//};
//
//
//int main()
//{
//
//
//}
