//
// Created by garen_lee on 2025/5/23.
/**
  ******************************************************************************
  * @file           : L242_isAnagram.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/23
  ******************************************************************************
  */
//

#ifndef LEETCODE_HASHTABLE_L242_ISANAGRAM_H
#define LEETCODE_HASHTABLE_L242_ISANAGRAM_H

#include "util.h"
class L242_isAnagram : public LeetcodeHashtable {
private:
    bool isAnagram(string s, string t);
public:
    L242_isAnagram() {}
    void test();
};


#endif //LEETCODE_HASHTABLE_L242_ISANAGRAM_H
