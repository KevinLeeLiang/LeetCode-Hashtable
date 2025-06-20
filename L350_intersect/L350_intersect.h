//
// Created by garen_lee on 2025/6/20.
/**
  ******************************************************************************
  * @file           : L350_intersect.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/20
  ******************************************************************************
  */
//

#ifndef LEETCODE_HASHTABLE_L350_INTERSECT_H
#define LEETCODE_HASHTABLE_L350_INTERSECT_H

#include "util.h"
class L350_intersect : public LeetcodeHashtable {
private:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2);
public:
    L350_intersect() {}
    void test();
};


#endif //LEETCODE_HASHTABLE_L350_INTERSECT_H
