//
// Created by garen_lee on 2025/2/20.
/**
  ******************************************************************************
  * @file           : L37_solveSudoku.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/20
  ******************************************************************************
  */
//

#ifndef LEETCODE_HASHTABLE_L37_SOLVESUDOKU_H
#define LEETCODE_HASHTABLE_L37_SOLVESUDOKU_H

#include "util.h"
class L37_solveSudoku : public LeetcodeHashtable{
private:
    bool line[9][9];
    bool colum[9][9];
    bool block[3][3][9];
    vector<pair<int, int>> spaces;
    bool valid;
private:
    void solveSudoku(vector<vector<char>> &board);
    void dfs(vector<vector<char>> &board, int pos);
public:
    L37_solveSudoku(){}
    void test();
};


#endif //LEETCODE_HASHTABLE_L37_SOLVESUDOKU_H
