//
// Created by garen_lee on 2025/3/6.
/**
  ******************************************************************************
  * @file           : L73_setZeros.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/6
  ******************************************************************************
  */
//

#ifndef LEETCODE_HASHTABLE_L73_SETZEROS_H
#define LEETCODE_HASHTABLE_L73_SETZEROS_H

#include "util.h"
class L73_setZeros : public LeetcodeHashtable {
private:
    void setZeroes(vector<vector<int>> &matrix);
public:
    L73_setZeros() {}
    void test();
};


#endif //LEETCODE_HASHTABLE_L73_SETZEROS_H
