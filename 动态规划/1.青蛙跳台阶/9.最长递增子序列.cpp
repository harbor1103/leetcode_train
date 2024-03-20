////https://leetcode.cn/problems/longest-increasing-subsequence/description/
//
//#include<iostream>
//using namespace std;
//#include<vector>
//
//
//class Solution {
//public:
//    int lengthOfLIS(vector<int>& nums) {
//        if (nums.size() == 0)
//            return 0;
//            
//        vector<int> dp(nums.size()+1, 0);
//        for (int i = 0; i < nums.size(); i++)
//        {
//            dp[i] = 1;
//            for (int j = 0; j < i; j++)
//            {
//                dp[i]=max(dp[i],dp[j]+1);
//            }
//        }
//
//        return *max_element(dp.begin(), dp.end());
//    }
//};
//
//
//int main()
//{
//    Solution sol;
//    vector<int> nums = { 10,9,2,5,3,7,101,18 };
//    int ret = sol.lengthOfLIS(nums);
//    cout << ret << endl;
//}