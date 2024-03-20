////https://leetcode.cn/problems/word-break/
//#include<iostream>
//using namespace std;
//#include<vector>
//#include<string>
//#include<set>
//#include<unordered_map>
//#include<unordered_set>
//
//class Solution {
//public:
//    bool wordBreak(string s, vector<string>& wordDict) {
//        auto wordDictSet = unordered_set <string>();
//        for (auto word : wordDict)
//        {
//            wordDictSet.insert(word);
//        }
//
//       vector <bool> dp (s.size() + 1);
//       dp[0] = true;
//       for (int i = 1; i <= s.size(); i++)
//       {
//           for (int j = 0; j < i; j++)
//           {
//               if (dp[j ] && wordDictSet.find(s.substr(j, i - j)) != wordDictSet.end())
//               {
//                   dp[i] = true;
//                   break;
//               }
//           }
//       }
//
//       return dp[s.size()];
//
//    }
//};
//
//
//
//int main()
//{
//    Solution sol;
//    vector<string> wordDict = { "leet", "code" };
//    string s = "leetcode";
//    bool ret;
//    ret=sol.wordBreak(s, wordDict);
//    cout << ret << endl;    
//
//
//}