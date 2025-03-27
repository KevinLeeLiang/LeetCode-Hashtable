//
// Created by garen_lee on 2025/3/27.
/**
  ******************************************************************************
  * @file           : L139_wordBreak.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/27
  ******************************************************************************
  */
//

#include "L139_wordBreak.h"

bool L139_wordBreak::wordBreak(string s, vector<string> &wordDict) {
    auto wordDictSet = unordered_set <string> ();
    for (auto word: wordDict) {
        wordDictSet.insert(word);
    }

    auto dp = vector <bool> (s.size() + 1);
    dp[0] = true;
    for (int i = 1; i <= s.size(); ++i) {
        for (int j = 0; j < i; ++j) {
            if (dp[j] && wordDictSet.find(s.substr(j, i - j)) != wordDictSet.end()) {
                dp[i] = true;
                break;
            }
        }
    }

    return dp[s.size()];
}

void L139_wordBreak::test() {
    string s = "leetcode";
    vector<string> wordDict = {"leet", "code"};
    cout << wordBreak(s, wordDict) << endl;
    s = "applepenapple";
    wordDict = {"apple", "pen"};
    cout << wordBreak(s, wordDict) << endl;
    s = "catsandog";
    wordDict = {"cats", "dog", "sand", "and", "cat"};
    cout << wordBreak(s, wordDict) << endl;
}