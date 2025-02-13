//
// Created by garen_lee on 2025/2/13.
/**
  ******************************************************************************
  * @file           : L17_letterCombinations.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/13
  ******************************************************************************
  */
//

#ifndef LEETCODE_HASHTABLE_L17_LETTERCOMBINATIONS_H
#define LEETCODE_HASHTABLE_L17_LETTERCOMBINATIONS_H

#include "util.h"
class L17_letterCombinations : public LeetcodeHashtable{
private:
    const string letterMap_[10] = {
            "", // 0
            "", // 1
            "abc", // 2
            "def", // 3
            "ghi", // 4
            "jkl", // 5
            "mno", // 6
            "pqrs", // 7
            "tuv", // 8
            "wxyz", // 9
    };
    string s_;
    vector<string>result_;
    vector<string> letterCombinations(string digits);
    void backtracking(string digits, int index);
public:
    L17_letterCombinations(){}
    void test();
};


#endif //LEETCODE_HASHTABLE_L17_LETTERCOMBINATIONS_H
