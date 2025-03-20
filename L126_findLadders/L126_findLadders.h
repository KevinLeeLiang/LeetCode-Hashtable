//
// Created by garen_lee on 2025/3/20.
/**
  ******************************************************************************
  * @file           : L126_findLadders.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/20
  ******************************************************************************
  */
//

#ifndef LEETCODE_HASHTABLE_L126_FINDLADDERS_H
#define LEETCODE_HASHTABLE_L126_FINDLADDERS_H

#include "util.h"

class L126_findLadders : public LeetcodeHashtable {
private:
    void backtrack(vector<vector<string>> &res, const string &cur_word, unordered_map<string, set<string>> &from,
                   vector<string> &path);

    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string> &wordList);

public:
    L126_findLadders() {}

    void test();
};


#endif //LEETCODE_HASHTABLE_L126_FINDLADDERS_H
