//
// Created by garen_lee on 2025/3/27.
/**
  ******************************************************************************
  * @file           : L139_wordBreak.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/27
  ******************************************************************************
  */
//

#ifndef LEETCODE_HASHTABLE_L139_WORDBREAK_H
#define LEETCODE_HASHTABLE_L139_WORDBREAK_H

#include "util.h"
class L139_wordBreak : public LeetcodeHashtable {
private:
    bool wordBreak(string s, vector<string>& wordDict);
public:
    L139_wordBreak() {}
    void test();
};


#endif //LEETCODE_HASHTABLE_L139_WORDBREAK_H
