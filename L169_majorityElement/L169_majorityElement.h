//
// Created by garen_lee on 2025/4/25.
/**
  ******************************************************************************
  * @file           : L169_majorityElement.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/25
  ******************************************************************************
  */
//

#ifndef LEETCODE_HASHTABLE_L169_MAJORITYELEMENT_H
#define LEETCODE_HASHTABLE_L169_MAJORITYELEMENT_H

#include "util.h"
class L169_majorityElement : public LeetcodeHashtable {
private:
    int majorityElement(vector<int> &nums);
public:
    L169_majorityElement() {}
    void test();
};


#endif //LEETCODE_HASHTABLE_L169_MAJORITYELEMENT_H
