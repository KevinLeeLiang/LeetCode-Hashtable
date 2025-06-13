//
// Created by garen_lee on 2025/6/13.
/**
  ******************************************************************************
  * @file           : L347_topKFrequent.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/13
  ******************************************************************************
  */
//

#ifndef LEETCODE_HASHTABLE_L347_TOPKFREQUENT_H
#define LEETCODE_HASHTABLE_L347_TOPKFREQUENT_H

#include "util.h"
class L347_topKFrequent : public LeetcodeHashtable {
public:
    L347_topKFrequent() {}
    void test();
private:
    vector<int> topKFrequent(vector<int>& nums, int k);
};


#endif //LEETCODE_HASHTABLE_L347_TOPKFREQUENT_H
