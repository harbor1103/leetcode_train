////https://leetcode.cn/problems/find-pivot-index/description
//
//#include<vector>
//#include<iostream>
//using namespace std;
//
//
//
//class Solution {
//public:
//    int pivotIndex(vector<int>& nums) {
//        int n = nums.size();
//        if(n == 0) return -1;
//        if (n == 1) return 0;
//        vector<bool> dp(n + 1, false);
//
//        int lsum = 0;
//        int rsum = 0;
//        int pivot = 0;
//
//        for (int i = 0; i < n; i++)
//        {
//            rsum += nums[i];
//        }
//
//        for (int i = 1; i <= n; i++)
//        {
//            if (i == 1)
//            {
//                rsum -= nums[i -1];
//                lsum = 0;
//                if (lsum == rsum)
//                {
//                    return i - 1;
//                }
//            }
//            else if (i == n)
//            {
//                lsum += nums[i - 2];
//                rsum = 0;
//                if (lsum == rsum)
//                {
//                    return i - 1;
//                }
//            }
//            else
//            {
//                lsum += nums[i - 2];
//                rsum -= nums[i -1];
//                if (lsum == rsum) return (i - 1);
//            }
//        }
//        return -1;
//    }
//};
//
//
//
//int main()
//{
//    Solution sol;
//    vector<int> nums = { -1,-1,0,1,1,0 };
//    cout << sol.pivotIndex(nums) << endl;
//
//}