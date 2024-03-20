////https://leetcode.cn/problems/house-robber-ii/description/
//
//#include<vector>
//#include<iostream>
//using namespace std;
//
//class Solution {
//private:
//    int rob_(vector<int>& nums, int start, int end) {
//        int dp0 = 0, dp1 = 0;   // dp[i-2], dp[i-1]��ʼΪ0
//        int dp2;
//        for (int i = start; i < end; i++) {     // i-2Ҫ�Ϸ�����i��С��2��ʼ����
//            dp2 = max(dp1, dp0 + nums[i]);    // ����dp[i]
//            dp0 = dp1;  // ����dp[i-2]�����ڵ�ǰ��dp[i-1]
//            dp1 = dp2;  // ����dp[i-1]�����ڵ�ǰ��dp[i-2]
//        }
//        return dp1;
//    }
//
//public:
//    int rob(vector<int>& nums) {
//        int n = nums.size();
//        if (n == 1)return nums[0];   // ֻ��һ�����ݣ�ֱ�ӷ��ط��ݽ��
//        return max(rob_(nums, 0, n - 1), rob_(nums, 1, n));   // ��һ���������һ��������ͬʱ͵�����������һ��Ͳ��������һ�䣨[0, n-1)�����������һ��Ͳ�������һ�䣨[1, n)��
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