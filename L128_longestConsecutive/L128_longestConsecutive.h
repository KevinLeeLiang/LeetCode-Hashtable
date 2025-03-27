//
// Created by garen_lee on 2025/3/27.
/**
  ******************************************************************************
  * @file           : L128_longestConsecutive.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/27
  ******************************************************************************
  */
//

#ifndef LEETCODE_HASHTABLE_L128_LONGESTCONSECUTIVE_H
#define LEETCODE_HASHTABLE_L128_LONGESTCONSECUTIVE_H

#include "util.h"
class L128_longestConsecutive : public LeetcodeHashtable {
private:
    int longestConsecutive(vector<int>& nums);
public:
    L128_longestConsecutive() {}
    void test();
};


#endif //LEETCODE_HASHTABLE_L128_LONGESTCONSECUTIVE_H
