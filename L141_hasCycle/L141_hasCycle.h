//
// Created by garen-lee on 2025/4/4.
/**
  ******************************************************************************
  * @file           : L141_hasCycle.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/4
  ******************************************************************************
  */
//

#ifndef LEETCODE_HASHTABLE_L141_HASCYCLE_H
#define LEETCODE_HASHTABLE_L141_HASCYCLE_H

#include "util.h"
class L141_hasCycle : public LeetcodeHashtable {
private:
    bool hasCycle(ListNode *head);
public:
    L141_hasCycle() {}
    void test();
};


#endif //LEETCODE_HASHTABLE_L141_HASCYCLE_H
