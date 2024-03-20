//
//#include<iostream>
//using namespace std;
//#include<string>
//#include<vector>
//#include<set>
//#include<unordered_set>
//class Solution {
//public:
//    bool wordBreak(string s, vector<string>& wordDict) {
//        
//        unordered_set<string> wordSet(wordDict.begin(), wordDict.end());
//        
//        
//        int len_s = s.size();
//        vector<bool> dp(len_s + 1, false);  
//        dp[0] = true;
//        for (int i = 0; i <= len_s; i++)
//        {
//            for (int j = 0; j < i; j++)
//            {
//                string tmpWord = s.substr(j, i-j);
//                if (wordSet.find(tmpWord) != wordSet.end() && dp[j] == true)
//                {
//                    dp[i] = true;
//                }
//            }
//        }
//        return dp[len_s];
//    }
//};