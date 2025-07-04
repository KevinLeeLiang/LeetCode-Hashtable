//
// Created by garen_lee on 2025/7/4.
/**
  ******************************************************************************
  * @file           : L383_canConstruct.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/4
  ******************************************************************************
  */
//

#ifndef LEETCODE_HASHTABLE_L383_CANCONSTRUCT_H
#define LEETCODE_HASHTABLE_L383_CANCONSTRUCT_H

#include "util.h"
class L383_canConstruct : public LeetcodeHashtable {
private:
    bool canConstruct(string ransomNote, string magazine);
public:
    L383_canConstruct() {}
    void test();
};


#endif //LEETCODE_HASHTABLE_L383_CANCONSTRUCT_H
