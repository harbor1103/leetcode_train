////https://leetcode.cn/problems/house-robber-ii/description/
//
//#include<vector>
//#include<iostream>
//using namespace std;
//
//class Solution {
//private:
//    int rob_(vector<int>& nums, int start, int end) {
//        int dp0 = 0, dp1 = 0;   // dp[i-2], dp[i-1]初始为0
//        int dp2;
//        for (int i = start; i < end; i++) {     // i-2要合法，则i最小从2开始遍历
//            dp2 = max(dp1, dp0 + nums[i]);    // 更新dp[i]
//            dp0 = dp1;  // 更新dp[i-2]，等于当前的dp[i-1]
//            dp1 = dp2;  // 更新dp[i-1]，等于当前的dp[i-2]
//        }
//        return dp1;
//    }
//
//public:
//    int rob(vector<int>& nums) {
//        int n = nums.size();
//        if (n == 1)return nums[0];   // 只有一个房屋，直接返回房屋金额
//        return max(rob_(nums, 0, n - 1), rob_(nums, 1, n));   // 第一件房和最后一件房不能同时偷，因此搜索第一间就不搜索最后一间（[0, n-1)），搜索最后一间就不搜索第一间（[1, n)）
//    }
//};
//
//
//int main()
//{
//
//	Solution sol;
//	
//	vector<int> nums = { 1,2,3};
//
//	int ret = sol.rob(nums);
//	cout << ret << endl;
//
//
//
//
//}