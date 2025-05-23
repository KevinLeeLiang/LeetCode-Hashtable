//
// Created by garen_lee on 2025/5/23.
/**
  ******************************************************************************
  * @file           : L229_majorityElement.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/23
  ******************************************************************************
  */
//

#ifndef LEETCODE_HASHTABLE_L229_MAJORITYELEMENT_H
#define LEETCODE_HASHTABLE_L229_MAJORITYELEMENT_H

#include "util.h"
class L229_majorityElement : public LeetcodeHashtable {
private:
    vector<int> majorityElement(vector<int>& nums);
public:
    L229_majorityElement() {}
    void test();
};


#endif //LEETCODE_HASHTABLE_L229_MAJORITYELEMENT_H
