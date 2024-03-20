//#include<iostream>
//using namespace std;
//#include<vector>
//
//
//class Solution {
//public:
//    bool canPartition(vector<int>& nums) {
//        int sum = 0;
//        for (int i = 0; i < nums.size(); i++)
//        {
//            sum += nums[i];
//        }
//        if (sum % 2 == 1) return false;
//
//        int target = sum / 2;
//      
//        
//        
//        bool flag = false; 
//
//        vector<int> dp(target + 1, 0);
//
//        for (int i = 0; i < nums.size(); i++)
//        {
//            for (int j=target;j>=nums[i] ; j--)
//            {
//                			dp[j] = max(dp[j], dp[j - nums[i]] + nums[i]);
//                if (dp[j] == target)
//                            {
//					flag = true;
//					break;
//				}
//            }
//        }
//        return flag;
//    }
//};
//
//
//int main()
//{
//    vector<int> nums= {1,2,3,5};
//    Solution s;
//    cout<<s.canPartition(nums)<<endl;
//
//
//}