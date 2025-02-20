//
// Created by garen_lee on 2025/2/20.
/**
  ******************************************************************************
  * @file           : L36_isValidSudoku.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/20
  ******************************************************************************
  */
//

#ifndef LEETCODE_HASHTABLE_L36_ISVALIDSUDOKU_H
#define LEETCODE_HASHTABLE_L36_ISVALIDSUDOKU_H

#include "util.h"
class L36_isValidSudoku : public LeetcodeHashtable{
private:
    bool isValidSudoku(vector<vector<char>>& board);
public:
    L36_isValidSudoku() {}
    void test();
};


#endif //LEETCODE_HASHTABLE_L36_ISVALIDSUDOKU_H
