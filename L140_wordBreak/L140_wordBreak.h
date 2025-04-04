//
// Created by garen-lee on 2025/4/4.
/**
  ******************************************************************************
  * @file           : L140_wordBreak.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/4
  ******************************************************************************
  */
//

#ifndef HASHTABLE_L140_WORDBREAK_H
#define HASHTABLE_L140_WORDBREAK_H

#include "util.h"
class L140_wordBreak : public LeetcodeHashtable {
private:
    vector<string> wordBreak(string s, vector<string> &wordDict);
    void backTrack(string s, int index);
    unordered_map<int, vector<string>>ans_;
    unordered_set<string>wordSet_;
public:
    L140_wordBreak() {}
    void test();
};


#endif //HASHTABLE_L140_WORDBREAK_H
