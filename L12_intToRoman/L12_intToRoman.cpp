//
// Created by garen_lee on 2025/2/7.
/**
  ******************************************************************************
  * @file           : L12_intToRoman.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/7
  ******************************************************************************
  */
//

#include "L12_intToRoman.h"
const pair<int, string> valueSymbols[] = {
        {1000, "M"},
        {900,  "CM"},
        {500,  "D"},
        {400,  "CD"},
        {100,  "C"},
        {90,   "XC"},
        {50,   "L"},
        {40,   "XL"},
        {10,   "X"},
        {9,    "IX"},
        {5,    "V"},
        {4,    "IV"},
        {1,    "I"},
};

string L12_intToRoman::intToRoman(int num) {
    string roman;
    for (const auto &[value, symbol] : valueSymbols) {
        while (num >= value) {
            roman += symbol;
            num -= value;
        }
        if (num == 0)
            break;
    }
    return roman;
}

void L12_intToRoman::test() {
    int num = 3749;
    cout << intToRoman(num) << endl;
    num = 58;
    cout << intToRoman(num) << endl;
    num = 1994;
    cout << intToRoman(num) << endl;
}