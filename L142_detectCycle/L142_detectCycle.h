//
// Created by garen_lee on 2025/4/11.
/**
  ******************************************************************************
  * @file           : L142_detectCycle.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/11
  ******************************************************************************
  */
//

#ifndef LEETCODE_HASHTABLE_L142_DETECTCYCLE_H
#define LEETCODE_HASHTABLE_L142_DETECTCYCLE_H

#include "util.h"
class L142_detectCycle : public LeetcodeHashtable {
private:
    ListNode *detectCycle(ListNode *head);
public:
    L142_detectCycle() {}
    void test();
};


#endif //LEETCODE_HASHTABLE_L142_DETECTCYCLE_H
