////https://leetcode.cn/problems/maximum-subarray/
//#include<vector>
//#include<iostream>
//using namespace std;
//
//
//class Solution {
//public:
//    int maxSubArray(vector<int>& nums) {
//        int len = nums.size();
//        vector<int> dp(len, 0);
//        dp[0] = nums[0];
//        int maxret=nums[0];
//
//        for (int i = 1; i < len; i++)
//        {
//            		dp[i] = max(dp[i - 1] + nums[i], nums[i]);
//                    maxret = max(maxret, dp[i]);
//        }
//
//        return maxret;
//    }
//};
//
//
//
//int main()
//{
//
//    Solution sol;
//    vector<int> nums = { -2,1,-3,4,-1,2,1,-5,4 };
//    int ret = sol.maxSubArray(nums);
//    cout << ret << endl;
//
//
//
//}