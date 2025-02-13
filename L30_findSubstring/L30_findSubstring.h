//
// Created by garen_lee on 2025/2/13.
/**
  ******************************************************************************
  * @file           : L30_findSubstring.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/13
  ******************************************************************************
  */
//

#ifndef LEETCODE_HASHTABLE_L30_FINDSUBSTRING_H
#define LEETCODE_HASHTABLE_L30_FINDSUBSTRING_H

#include "util.h"
class L30_findSubstring : public LeetcodeHashtable{
private:
    vector<int> findSubstring(string s, vector<string>& words);
public:
    L30_findSubstring(){}
    void test();

};


#endif //LEETCODE_HASHTABLE_L30_FINDSUBSTRING_H
