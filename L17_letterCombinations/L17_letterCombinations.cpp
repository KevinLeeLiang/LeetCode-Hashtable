//
// Created by garen_lee on 2025/2/13.
/**
  ******************************************************************************
  * @file           : L17_letterCombinations.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/13
  ******************************************************************************
  */
//

#include "L17_letterCombinations.h"

void L17_letterCombinations::backtracking(string digits, int index) {
    if (index == digits.size()) {
        result_.push_back(s_);
        return;
    }
    auto digit = digits[index] - '0';
    string letters = this->letterMap_[digit];

    for (auto letter : letters) {
        s_ += letter;
        backtracking(digits, index + 1);
        s_.pop_back();
    }
}

vector<string> L17_letterCombinations::letterCombinations(string digits) {
    s_.clear();
    result_.clear();
    if (digits.size() == 0) {
        return result_;
    }
    backtracking(digits, 0);
    return result_;
}
void L17_letterCombinations::test() {
    string digits = "23";
    vector<string> result = letterCombinations(digits);
    print_vector(result);
    digits = "2";
    result = letterCombinations(digits);
    print_vector(result);
    digits = "";
    result = letterCombinations(digits);
    print_vector(result);
}