//
// Created by garen_lee on 2025/6/20.
/**
  ******************************************************************************
  * @file           : L349_intersection.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/20
  ******************************************************************************
  */
//

#ifndef LEETCODE_HASHTABLE_L349_INTERSECTION_H
#define LEETCODE_HASHTABLE_L349_INTERSECTION_H

#include "util.h"
class L349_intersection : public LeetcodeHashtable {
private:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2);
public:
    L349_intersection() {}
    void test();
};


#endif //LEETCODE_HASHTABLE_L349_INTERSECTION_H
