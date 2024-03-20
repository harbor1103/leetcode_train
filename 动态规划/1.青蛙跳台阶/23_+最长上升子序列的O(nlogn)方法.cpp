////https://leetcode.cn/problems/longest-increasing-subsequence/solutions/147667/zui-chang-shang-sheng-zi-xu-lie-by-leetcode-soluti/
//
//#include<iostream>
//using namespace std;
//#include<vector>
//
//
//
//class Solution {
//public:
//    int lengthOfLIS(vector<int>& nums) {
//        int len = nums.size();
//        if (len < 2)
//        {
//            return len;
//        }
//        vector<int> dp(len + 1);
//        int end = 0;
//        dp[0] = nums[0];
//        for (int i = 1; i < len; i++)
//        {
//            if (nums[i] > dp[end])
//            {
//                dp[end + 1] = nums[i];
//                end += 1;
//            }
//            else
//            {
//                int left = 0;
//                int right = end;
//                while (left < right)
//                {
//                    int mid = (left + right) >> 1;
//                    if (nums[i] > dp[mid])
//                    {
//                        left = mid + 1;
//                    }
//                    else
//                    {
//                        right = mid;
//                    }
//                }
//                dp[left] = nums[i];
//            }
//        }
//        return end + 1;
//    }
//};
//
//int main()
//{
//    Solution sol;
//
//    vector<int> nums = { 10,9,2,5,3,7,101,18 };
//
//    cout << sol.lengthOfLIS(nums) << endl;
//}