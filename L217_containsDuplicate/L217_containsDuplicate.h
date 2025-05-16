//
// Created by garen_lee on 2025/5/16.
/**
  ******************************************************************************
  * @file           : L217_containsDuplicate.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/16
  ******************************************************************************
  */
//

#ifndef LEETCODE_HASHTABLE_L217_CONTAINSDUPLICATE_H
#define LEETCODE_HASHTABLE_L217_CONTAINSDUPLICATE_H

#include "util.h"
class L217_containsDuplicate : public LeetcodeHashtable {
private:
    bool containsDuplicate(vector<int>& nums);
public:
    L217_containsDuplicate() {}
    void test();
};


#endif //LEETCODE_HASHTABLE_L217_CONTAINSDUPLICATE_H
