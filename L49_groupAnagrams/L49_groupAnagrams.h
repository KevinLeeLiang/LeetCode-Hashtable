//
// Created by garen_lee on 2025/2/27.
/**
  ******************************************************************************
  * @file           : L49_groupAnagrams.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/27
  ******************************************************************************
  */
//

#ifndef LEETCODE_HASHTABLE_L49_GROUPANAGRAMS_H
#define LEETCODE_HASHTABLE_L49_GROUPANAGRAMS_H

#include "util.h"
class L49_groupAnagrams : public LeetcodeHashtable{
private:
    vector<vector<string>> groupAnagrams(vector<string>& strs);
public:
    L49_groupAnagrams() {}
    void test();
};


#endif //LEETCODE_HASHTABLE_L49_GROUPANAGRAMS_H
