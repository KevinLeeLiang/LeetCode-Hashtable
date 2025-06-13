//
// Created by garen_lee on 2025/6/13.
/**
  ******************************************************************************
  * @file           : L336_palindromePairs.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/13
  ******************************************************************************
  */
//

#ifndef LEETCODE_HASHTABLE_L336_PALINDROMEPAIRS_H
#define LEETCODE_HASHTABLE_L336_PALINDROMEPAIRS_H

#include "util.h"
class L336_palindromePairs : public LeetcodeHashtable {
private:
    vector<vector<int>> palindromePairs(vector<string>& words);
    void insert(string &word, int index);
    bool isPalindrome(const string& word, int i, int j);
    void dfsFindAllPalindromePair(const int& node1, const int& node2, const vector<string>& words);
private:

    unordered_set<int> lens;

    vector<vector<int>> result;

    int reverCnt = 0, orderCnt = 0;
public:
    L336_palindromePairs() {}
    void test();
};


#endif //LEETCODE_HASHTABLE_L336_PALINDROMEPAIRS_H
