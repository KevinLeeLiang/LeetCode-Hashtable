//
// Created by garen_lee on 2025/2/27.
/**
  ******************************************************************************
  * @file           : L41_firstMissingPositive.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/27
  ******************************************************************************
  */
//

#ifndef LEETCODE_HASHTABLE_L41_FIRSTMISSINGPOSITIVE_H
#define LEETCODE_HASHTABLE_L41_FIRSTMISSINGPOSITIVE_H

#include "util.h"
class L41_firstMissingPositive : public LeetcodeHashtable{
private:
    int firstMissingPositive(vector<int>& nums);
public:
    L41_firstMissingPositive() {}
    void test();
};


#endif //LEETCODE_HASHTABLE_L41_FIRSTMISSINGPOSITIVE_H
