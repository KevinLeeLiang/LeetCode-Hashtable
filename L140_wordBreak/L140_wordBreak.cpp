//
// Created by garen-lee on 2025/4/4.
/**
  ******************************************************************************
  * @file           : L140_wordBreak.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/4
  ******************************************************************************
  */
//

#include "L140_wordBreak.h"

void L140_wordBreak::backTrack(string s, int index) {
    if (!ans_.count(index)) {
        if (index == s.size()) {
            ans_[index] = {""};
            return ;
        }
        ans_[index] = {};
        for (int i = index + 1; i <=s.size(); ++i) {
            string word = s.substr(index, i - index);
            if (wordSet_.count(word)) {
                backTrack(s, i);
                for (auto &str : ans_[i]) {
                    ans_[index].push_back(word + (str.size() > 0 ? " " : "") + str);
                }
            }
        }
    }
}

vector<string> L140_wordBreak::wordBreak(string s, vector<string>& wordDict) {
    wordSet_.clear();
    ans_.clear();
    wordSet_.insert(wordDict.begin(), wordDict.end());
    backTrack(s, 0);
    return ans_[0];
}

void L140_wordBreak::test() {
    string s = "catsanddog";
    vector<string> wordDict = {"cat", "cats", "and", "sand", "dog"};
    vector<string> result = wordBreak(s, wordDict);
    print_vector(result);
    s = "pineapplepenapple";
    wordDict = {"apple", "pen", "applepen", "pine", "pineapple"};
    result = wordBreak(s, wordDict);
    print_vector(result);
    s = "catsandog";
    wordDict = {"cats", "dog", "sand", "and", "cat"};
    result = wordBreak(s, wordDict);
    print_vector(result);
}