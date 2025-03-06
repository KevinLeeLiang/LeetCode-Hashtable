//
// Created by garen_lee on 2025/3/6.
/**
  ******************************************************************************
  * @file           : L73_setZeros.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/6
  ******************************************************************************
  */
//

#include "L73_setZeros.h"

void L73_setZeros::setZeroes(vector<vector<int>> &matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    bool flag_col0 = false;
    for (int i = 0; i < m; i++) {
        if (matrix[i][0] == 0) flag_col0 = true;
        for (int j = 1; j < n; j++) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }
    for (int i = m - 1; i >= 0; i--) {
        for (int j = 1; j < n; j++) {
            if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
        if (flag_col0) matrix[i][0] = 0;
    }
}

void L73_setZeros::test() {
    vector<vector<int>> matrix = {
            {1, 1, 1},
            {1, 0, 1},
            {1, 1, 1}
    };
    setZeroes(matrix);
    print_vector_vector(matrix);
    matrix = {
            {0, 1, 2, 0},
            {3, 4, 5, 2},
            {1, 3, 1, 5}
    };
    setZeroes(matrix);
    print_vector_vector(matrix);
}