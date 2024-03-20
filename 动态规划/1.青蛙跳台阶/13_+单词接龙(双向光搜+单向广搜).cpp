////https://leetcode.cn/problems/word-ladder/
//
//#include<iostream>
//#include<string>
//#include<vector>
//#include<set>
//#include<queue>
//#include<map>
//#include<unordered_map>
//#include<unordered_set>
//using namespace std;
//
//
//class Solution {
//public:
//
//    ////单向广搜版本
//    //int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
//    //    unordered_set<string> wordSet(wordList.begin(), wordList.end());
//    //    if (wordSet.find(endWord)==wordSet.end()) return 0;    
//    //    unordered_map<string, int> visitMap;
//    //    visitMap.insert(pair<string, int>(beginWord, 1));
//    //    queue<string> q;
//    //    q.push(beginWord);
//    //    while (!q.empty())
//    //    {
//    //        string word = q.front();
//    //        q.pop();
//    //        int path=visitMap[word];
//    //        for (int i = 0; i < word.size(); i++)
//    //        {
//    //            string newWord = word;
//    //            for (int j = 0; j < 26; j++)
//    //            {
//    //                newWord[i] = j + 'a';
//    //                if (newWord == endWord)
//    //                {
//    //                    return path + 1;
//    //                }
//    //                if (wordSet.find(newWord) != wordSet.end() && visitMap.find(newWord) == visitMap.end())
//    //                {
//    //                    visitMap.insert(pair<string, int>(newWord, path + 1));
//    //                    q.push(newWord);
//    //                }
//    //            }
//    //        }
//    //    }
//    //    return 0;
//    //}
//
//
//    //双向广搜版本
//    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
//        unordered_set<string> wordSet(wordList.begin(), wordList.end());
//        if (wordSet.find(endWord) == wordSet.end()) return 0;
//
//        unordered_set<string> smallLevel;
//        unordered_set<string> bigLevel;
//        unordered_set<string> nextLevel;
//
//        smallLevel.insert(beginWord);
//        bigLevel.insert(endWord);
//
//        int len = 2;
//        while (!smallLevel.empty())
//        {
//
//            for (std::unordered_set<string>::iterator w= smallLevel.begin(); w != smallLevel.end(); w++)
//            {
//                string word = *w;
//                for (int i = 0; i < word.size(); i++)
//                {
//                    string saveOldWord = word;
//                    
//                    for (int j=0 ;j<26; j++)
//                    {
//                        word[i] = j + 'a';
//
//                        if (word != saveOldWord)
//                        {
//                            if (bigLevel.find(word) != bigLevel.end())
//                            {
//                                return len;
//                            }
//                            if (wordSet.find(word) != wordSet.end())
//                            {
//                                nextLevel.insert(word);
//                                wordSet.erase(word);
//                            }
//                        }
//                    }
//                    word = saveOldWord;
//                }
//            }
//            if (nextLevel.size() <= bigLevel.size())
//            {
//                unordered_set<string> tmp = smallLevel;
//                smallLevel=nextLevel;
//                nextLevel = tmp;
//            }
//            else
//            {
//                unordered_set<string> tmp = smallLevel;
//                smallLevel = bigLevel;
//                bigLevel = nextLevel;
//                nextLevel = tmp;
//            }
//            nextLevel.clear();
//            ++len;
//        }
//        return 0;
//    }
//};
//
//
//
//
//
//
//
//
//int main()
//{
//    Solution sol;
//    string beginWord = "hit";
//    string endWord = "cog";
//    vector<string> wordList = { "hot","dot","dog","lot","log","cog" };
//    cout << sol.ladderLength(beginWord, endWord, wordList) << endl;
//}