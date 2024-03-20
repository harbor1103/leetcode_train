//#include<iostream>
//using namespace std;
//#include<vector>
//
//
//
//class Solution {
//public:
//    int findLength(vector<int>& nums1, vector<int>& nums2) {
//        int n1 = nums1.size();
//        int n2 = nums2.size();
//
//        vector<vector<int>> dp(n1 + 1, vector<int>(n2 + 1, 0));
//        int maxN = 0;
//        for (int i = 1; i <= n1; i++)
//        {
//            for (int j = 1; j <= n2; j++)
//            {
//                if (nums1[i - 1] == nums2[j - 1])
//                {
//                    dp[i][j] = dp[i - 1][j - 1] + 1;
//                    if (dp[i][j] > maxN) maxN = dp[i][j];
//                
//                }
//            }
//        }
//        return maxN;
//    }
//};
//
//
//int main()
//{
//
//   vector<int> nums1 = { 1, 2, 3, 2, 1 };
//   vector<int> nums2 = { 3, 2, 1, 4, 7 };
//
//   Solution obj;
//   cout << obj.findLength(nums1, nums2) << endl;
//
//
//
//}