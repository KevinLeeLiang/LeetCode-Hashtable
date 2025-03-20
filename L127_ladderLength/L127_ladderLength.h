//
// Created by garen_lee on 2025/3/20.
/**
  ******************************************************************************
  * @file           : L127_ladderLength.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/20
  ******************************************************************************
  */
//

#ifndef LEETCODE_HASHTABLE_L127_LADDERLENGTH_H
#define LEETCODE_HASHTABLE_L127_LADDERLENGTH_H

#include "util.h"

class L127_ladderLength : public LeetcodeHashtable {
private:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList);
public:
    L127_ladderLength() {}
    void test();
};


#endif //LEETCODE_HASHTABLE_L127_LADDERLENGTH_H
