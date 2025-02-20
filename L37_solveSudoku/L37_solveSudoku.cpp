//
// Created by garen_lee on 2025/2/20.
/**
  ******************************************************************************
  * @file           : L37_solveSudoku.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/20
  ******************************************************************************
  */
//

#include "L37_solveSudoku.h"
void L37_solveSudoku::dfs(vector<vector<char>> &board, int pos) {
    if (pos == spaces.size()) {
        valid = true;
        return;
    }
    auto& [i, j] = spaces[pos];
    for (int digit = 0; digit < 9 && !valid; digit++) {
        if (!line[i][digit] && !colum[j][digit] && !block[i/3][j/3][digit]) {
            line[i][digit] = colum[j][digit] = block[i / 3][j / 3][digit] = true;
            board[i][j] = digit + '0' + 1;
            dfs(board, pos + 1);
            line[i][digit] = colum[j][digit] = block[i / 3][j / 3][digit] = false;
        }
    }
}
void L37_solveSudoku::solveSudoku(vector<vector<char>> &board) {
    memset(line, false, sizeof(line));
    memset(colum, false, sizeof(colum));
    memset(block, false, sizeof(block));
    valid = false;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (board[i][j] == '.') {
                spaces.emplace_back(i, j);
            } else {
                int digit = board[i][j] - '0' - 1;
                line[i][digit] = colum[j][digit] = block[i / 3][j / 3][digit] = true;
            }
        }
    }
    return dfs(board, 0);
}

void L37_solveSudoku::test() {
    vector<vector<char>> board;
    board = {{'5', '3', '.', '.', '7', '.', '.', '.', '.'},
             {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
             {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
             {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
             {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
             {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
             {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
             {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
             {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};
    solveSudoku(board);
    print_vector_vector(board);
    board = {{'5', '3', '4', '6', '7', '8', '9', '1', '2'},
             {'6', '7', '2', '1', '9', '5', '3', '4', '8'},
             {'1', '9', '8', '3', '4', '2', '5', '6', '7'},
             {'8', '5', '9', '7', '6', '1', '4', '2', '3'},
             {'4', '2', '6', '8', '5', '3', '7', '9', '1'},
             {'7', '1', '3', '9', '2', '4', '8', '5', '6'},
             {'9', '6', '1', '5', '3', '7', '2', '8', '4'},
             {'2', '8', '7', '4', '1', '9', '6', '3', '5'},
             {'3', '4', '5', '2', '8', '6', '1', '7', '9'}};
    solveSudoku(board);
    print_vector_vector(board);
}