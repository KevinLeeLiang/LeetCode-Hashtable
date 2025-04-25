//
// Created by garen_lee on 2025/4/25.
/**
  ******************************************************************************
  * @file           : L166_fractionToDecimal.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/25
  ******************************************************************************
  */
//

#ifndef LEETCODE_HASHTABLE_L166_FRACTIONTODECIMAL_H
#define LEETCODE_HASHTABLE_L166_FRACTIONTODECIMAL_H

#include "util.h"
class L166_fractionToDecimal : public LeetcodeHashtable {
private:
    string fractionToDecimal(int numerator, int denominator);
public:
    L166_fractionToDecimal() {}
    void test();
};


#endif //LEETCODE_HASHTABLE_L166_FRACTIONTODECIMAL_H
