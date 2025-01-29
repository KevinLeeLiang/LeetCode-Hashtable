//
// Created by garen-lee on 2025/1/29.
/**
  ******************************************************************************
  * @file           : twoSum.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/1/29
  ******************************************************************************
  */
//

#ifndef LEETCODE_HASHTABLE_TWOSUM_H
#define LEETCODE_HASHTABLE_TWOSUM_H
#include "../util/util.h"
using namespace std;
class L1_twoSum : public LeetcodeHashtable{
private:
    vector<int> twoSum(vector<int>& nums, int target);
public:
    L1_twoSum(){};
    void test();
};


#endif //LEETCODE_HASHTABLE_TWOSUM_H
