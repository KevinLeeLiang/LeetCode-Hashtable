//
// Created by garen_lee on 2025/4/25.
/**
  ******************************************************************************
  * @file           : L166_fractionToDecimal.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/25
  ******************************************************************************
  */
//

#include "L166_fractionToDecimal.h"

string L166_fractionToDecimal::fractionToDecimal(int numerator, int denominator) {
    long num = numerator;
    long den = denominator;
    if (num % den == 0) {
        return to_string(num / den);
    }
    string res;
    if (num < 0 ^ den < 0) {
        res += '-';
    }
    num = abs(num);
    den = abs(den);
    long integer = num / den;
    res += to_string(integer);
    res += '.';
    string fraction;
    unordered_map<long, int> map;
    long remainder = num % den;
    int index = 0;
    while (remainder != 0 && !map.count(remainder)) {
        map[remainder] = index;
        remainder *= 10;
        fraction += to_string(remainder / den);
        remainder %= den;
        index++;
    }
    if (remainder != 0) {
        int insert_index = map[remainder];
        fraction = fraction.substr(0, insert_index) + '(' + fraction.substr(insert_index) + ')';
    }
    res += fraction;
    return res;
}

void L166_fractionToDecimal::test() {
    int numerator = 1;
    int denominator = 2;
    cout << fractionToDecimal(numerator, denominator) << endl;
    numerator = 2;
    denominator = 1;
    cout << fractionToDecimal(numerator, denominator) << endl;
    numerator = 4;
    denominator = 333;
    cout << fractionToDecimal(numerator, denominator) << endl;
}