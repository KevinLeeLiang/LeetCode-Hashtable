//
// Created by garen_lee on 2025/4/18.
/**
  ******************************************************************************
  * @file           : L149_maxPoints.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/18
  ******************************************************************************
  */
//

#ifndef LEETCODE_HASHTABLE_L149_MAXPOINTS_H
#define LEETCODE_HASHTABLE_L149_MAXPOINTS_H

#include "util.h"
class L149_maxPoints : public LeetcodeHashtable {
private:
    int maxPoints(vector<vector<int>>& points);
    int gcd(int a, int b);
public:
    L149_maxPoints() {}
    void test();
};


#endif //LEETCODE_HASHTABLE_L149_MAXPOINTS_H
