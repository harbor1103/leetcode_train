////https://leetcode.cn/problems/house-robber/description/
//
// 
// https://www.bilibili.com/video/BV1Xj411K7oF/?vd_source=b0ad7a11a35f6bb99c79b79b455563fa
// 
//#include<iostream>
//using namespace std;
//#include<vector>
//
//
//
//class Solution {
//public:
//    int rob(vector<int>& nums) {
//        int len = nums.size();
//        if (len == 0)
//        {
//            return 0;
//        }
//        if (len == 1)
//        {
//            return nums[0];
//        }
//        if (len == 2)
//        {
//            return max(nums[0], nums[1]);
//        }
//        cout << len << endl;
//        int dp[1000];
//        dp[0] = 0;
//        dp[1] = nums[0];
//
//        for (int i = 2; i <= len; i++)
//        {
//            dp[i] = max((dp[i - 2] + nums[i - 1]), dp[i - 1]);
//        }
//        return dp[len];
//    }
//
//
////# �Ż�״̬�ռ��Ĵ���
//    int rob2(vector<int>& nums) {
//        int start= 0, end = nums.size();
//        int dp0 = 0, dp1 = 0;   // dp[i-2], dp[i-1]��ʼΪ0
//        int dp2;
//        for (int i = start; i < end; i++) {     // i-2Ҫ�Ϸ�����i��С��2��ʼ����
//            dp2 = max(dp1, dp0 + nums[i]);    // ����dp[i]
//            dp0 = dp1;  // ����dp[i-2]�����ڵ�ǰ��dp[i-1]
//            dp1 = dp2;  // ����dp[i-1]�����ڵ�ǰ��dp[i-2]
//        }
//        return dp1;
//    }
//};
//
//
//
//
//
//
//
//int main()
//{
//    Solution a;
//    int ret;
//    vector<int> nums = { 2,7,9,3,1 };
//    ret=a.rob2(nums);
//    cout << ret << endl;
//}