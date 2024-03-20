//#include<iostream>
//using namespace std;
//#include<vector>
//
//
//
//
//
//class Solution {
//public:
//
//    int rob0(vector<int>& nums) {
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
//
//
//    int rob(vector<int>& nums) {
//        int len = nums.size();
//        vector<int> dp(len + 1, 0);
//        dp[0] = nums[0];
//        if (len == 1)
//        {
//            return dp[0];
//        }
//        else if (len == 2)
//        {
//            return max(nums[0], nums[1]);
//
//        }
//
//        vector<int> num1(nums.begin(), nums.end() - 1);
//        vector<int> num2(nums.begin() + 1, nums.end());
//        int ret = max(rob0(num1), rob0(num2));
//        return ret;
//    }
//};