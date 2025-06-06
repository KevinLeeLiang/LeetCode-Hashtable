//
// Created by garen_lee on 2025/6/6.
/**
  ******************************************************************************
  * @file           : L299_getHint.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/6
  ******************************************************************************
  */
//

#ifndef LEETCODE_HASHTABLE_L299_GETHINT_H
#define LEETCODE_HASHTABLE_L299_GETHINT_H

#include "util.h"
class L299_getHint : public LeetcodeHashtable {
private:
    string getHint(string secret, string guess);
public:
    L299_getHint() {}
    void test();
};


#endif //LEETCODE_HASHTABLE_L299_GETHINT_H
