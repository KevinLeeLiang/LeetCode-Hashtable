//
// Created by garen_lee on 2025/6/6.
/**
  ******************************************************************************
  * @file           : L290_wordPattern.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/6
  ******************************************************************************
  */
//

#ifndef LEETCODE_HASHTABLE_L290_WORDPATTERN_H
#define LEETCODE_HASHTABLE_L290_WORDPATTERN_H

#include "util.h"
class L290_wordPattern : public LeetcodeHashtable {
private:
    bool wordPattern(string pattern, string s);
public:
    L290_wordPattern() {}
    void test();
};


#endif //LEETCODE_HASHTABLE_L290_WORDPATTERN_H
