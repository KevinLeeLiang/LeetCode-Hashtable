//
// Created by garen-lee on 2025/5/2.
/**
  ******************************************************************************
  * @file           : L187_findRepeatedDnaSequences.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/2
  ******************************************************************************
  */
//

#ifndef LEETCODE_HASHTABLE_L187_FINDREPEATEDDNASEQUENCES_H
#define LEETCODE_HASHTABLE_L187_FINDREPEATEDDNASEQUENCES_H

#include "util.h"
class L187_findRepeatedDnaSequences : public LeetcodeHashtable {
private:
    vector<string> findRepeatedDnaSequences(string s);
public:
    L187_findRepeatedDnaSequences() {}
    void test();
};


#endif //LEETCODE_HASHTABLE_L187_FINDREPEATEDDNASEQUENCES_H
