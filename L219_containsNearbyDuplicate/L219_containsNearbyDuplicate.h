//
// Created by garen_lee on 2025/5/16.
/**
  ******************************************************************************
  * @file           : L219_containsNearbyDuplicate.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/16
  ******************************************************************************
  */
//

#ifndef LEETCODE_HASHTABLE_L219_CONTAINSNEARBYDUPLICATE_H
#define LEETCODE_HASHTABLE_L219_CONTAINSNEARBYDUPLICATE_H

#include "util.h"
class L219_containsNearbyDuplicate : public LeetcodeHashtable {
private:
    bool containsNearbyDuplicate(vector<int>& nums, int k);
public:
    L219_containsNearbyDuplicate() {}
    void test();
};


#endif //LEETCODE_HASHTABLE_L219_CONTAINSNEARBYDUPLICATE_H
