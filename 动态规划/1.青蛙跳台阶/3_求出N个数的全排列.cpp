//题目描述：https://leetcode.cn/problems/permutations/description/

//长文题解：https://leetcode.cn/problems/permutations/solutions/9914/hui-su-suan-fa-python-dai-ma-java-dai-ma-by-liweiw/

//题解：https://leetcode.cn/problems/permutations/solutions/218275/quan-pai-lie-by-leetcode-solution-2/

#include<iostream>
using namespace std;
#include<vector>

class Solution {
private:
    vector<vector<int>> res;
    void dfs(vector<int> num, int x)
    {
        if (x == num.size() - 1)
        {
            res.push_back(num);
            return;
        }
        for (int i = x; i < num.size(); i++)
        {
            swap(num[i], num[x]);
            dfs(num, x + 1);
            swap(num[i], num[x]);

        }
    }


public:
    vector<vector<int>> permute(vector<int>& nums) {
        dfs(nums, 0);
        return res;
    }
};
