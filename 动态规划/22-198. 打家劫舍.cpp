//#include<vector>
//#include<iostream>
//using namespace std;
//class Solution {
//public:
//    int rob(vector<int>& nums) {
//        int len = nums.size();
//
//        vector<int> dp(len + 1, 0);
//
//        dp[0] = nums[0];
//        if (len == 1)
//        {
//            return dp[0];
//        }
//        else if (len == 2)
//        {
//            if (nums[1] > nums[0])
//            {
//                dp[1] = nums[1];
//            }
//            else
//            {
//                dp[1] = nums[0];
//            }
//            return max(dp[0], dp[1]);
//
//        }
//        else
//        {
//            if (nums[1] > nums[0])
//            {
//                dp[1] = nums[1];
//            }
//            else
//            {
//                dp[1] = nums[0];
//            }
//            for (int i = 2; i < len; i++)
//            {
//                dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
//            }
//            return dp[len - 1];
//        }
//
//    }
//};
//
//
//
//int main()
//{
//    vector<int> nums = { 1,2,3,1 };
//
//    Solution sol;
//    int res = sol.rob(nums);
//
//
//
//
//}