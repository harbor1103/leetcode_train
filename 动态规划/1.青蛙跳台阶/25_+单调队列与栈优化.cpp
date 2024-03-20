#include<iostream>
#include<vector>
using namespace std;
#include<stack>
#include<deque>



////////////////////////////////////////////////////////////////////////
//https://www.bilibili.com/video/BV1H5411j7o6/?spm_id_from=333.337.search-card.all.click&vd_source=b0ad7a11a35f6bb99c79b79b455563fa
//题目链接：https://leetcode-cn.com/problems/next-greater-element-ii/
//				https://www.luogu.com.cn/problem/P1886


//
//class oneQueue
//{
//public:
//    int  getMax()
//    {
//        return Que.front();
//    }
//    void pop(int value)
//    {
//        if (!Que.empty() && value == Que.front())
//        {
//            Que.pop_front();
//        }
//    }
//    void push(int value)
//    {
//        while (!Que.empty() && value > Que.back())
//        {
//            Que.pop_back();
//        }
//        Que.push_back(value);
//    }
//
//
//    deque<int> Que;
//};
//
//
//
//class Solution {
//public:
//    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//        int len = nums.size();
//        if (len == 0) return {};
//
//        vector<int> ret;
//        oneQueue q;
//        for (int i = 0; i < k; i++)
//        {
//            q.push(nums[i]);
//        }
//        ret.push_back(q.getMax());
//        for (int i = k; i < len; i++)
//        {
//            q.pop(nums[i - k]);
//            q.push(nums[i]);
//            ret.push_back(q.getMax());
//        }
//
//        return ret;
//    }
//};
//
//
//int main()
//{
//    Solution s;
//    vector<int> nums = { -7,-8,7,5,7,1,6,0 };
//    int k = 4;
//    vector<int> res = s.maxSlidingWindow(nums, k);
//}






// 
////////////////////////////////////////////////////////////////////////
//https://www.bilibili.com/video/BV1354y1C7SF/?spm_id_from=333.337.search-card.all.click&vd_source=b0ad7a11a35f6bb99c79b79b455563fa
//
// 
// 
// 
// 
// 
// 
// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//https://www.bilibili.com/video/BV12G411b7tk/?spm_id_from=333.788.top_right_bar_window_history.content.click&vd_source=b0ad7a11a35f6bb99c79b79b455563fa
//https://leetcode.cn/problems/daily-temperatures/description/

//精讲：https://www.bilibili.com/video/BV1VN411J7S7/?vd_source=b0ad7a11a35f6bb99c79b79b455563fa

//class Solution {
//public:
//    vector<int> dailyTemperatures(vector<int>& temperatures) {
//        int len=temperatures.size();
//        if (len==0) return {};
//
//        vector<int> res(len,0);
//        stack<int> s;
//        for (int i = 0; i < len; i++)
//        {
//            while (!s.empty() && temperatures[i] > temperatures[s.top()])
//            {
//                int Lindex = s.top();
//                res[Lindex] = i - Lindex;
//                s.pop();
//            }
//            s.push(i);
//        }
//        return res;
//    }
//};
//
//
//
//
//int main()
//{
//
//    Solution s;
//    vector<int> temperatures = { 73, 74, 75, 71, 69, 72, 76, 73 };
//    vector<int> res = s.dailyTemperatures(temperatures);
//
//}