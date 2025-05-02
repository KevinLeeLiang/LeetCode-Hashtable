//
// Created by garen-lee on 2025/5/2.
/**
  ******************************************************************************
  * @file           : L202_isHappy.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/2
  ******************************************************************************
  */
//

#ifndef LEETCODE_HASHTABLE_L202_ISHAPPY_H
#define LEETCODE_HASHTABLE_L202_ISHAPPY_H

#include "util.h"
class L202_isHappy : public LeetcodeHashtable {
private:
    bool isHappy(int n) ;
    int getNext(int n);
public:
    L202_isHappy() {}
    void test();
};


#endif //LEETCODE_HASHTABLE_L202_ISHAPPY_H
