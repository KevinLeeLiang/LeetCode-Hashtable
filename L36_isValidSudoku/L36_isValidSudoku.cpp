//
// Created by garen_lee on 2025/2/20.
/**
  ******************************************************************************
  * @file           : L36_isValidSudoku.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/20
  ******************************************************************************
  */
//

#include "L36_isValidSudoku.h"

bool L36_isValidSudoku::isValidSudoku(vector<vector<char>> &board) {
    int rows[9][9];
    int columns[9][9];
    int subboxes[3][3][9];

    memset(rows,0,sizeof(rows));
    memset(columns,0,sizeof(columns));
    memset(subboxes,0,sizeof(subboxes));
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            char c = board[i][j];
            if (c != '.') {
                int index = c - '0' - 1;
                rows[i][index]++;
                columns[j][index]++;
                subboxes[i / 3][j / 3][index]++;
                if (rows[i][index] > 1 || columns[j][index] > 1 || subboxes[i / 3][j / 3][index] > 1) {
                    return false;
                }
            }
        }
    }
    return true;
}

void L36_isValidSudoku::test() {
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
    cout << isValidSudoku(board) << endl;
    board = {{'8', '3', '.', '.', '7', '.', '.', '.', '.'},
             {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
             {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
             {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
             {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
             {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
             {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
             {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
             {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};
    cout << isValidSudoku(board) << endl;
}
