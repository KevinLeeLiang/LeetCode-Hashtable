//
// Created by garen_lee on 2025/2/7.
/**
  ******************************************************************************
  * @file           : L13_romanToInt.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/7
  ******************************************************************************
  */
//

#include "L13_romanToInt.h"
unordered_map<char, int> symbolValues = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000},
};

int L13_romanToInt::romanToInt(string s){
    int ans = 0;
    int n = s.size();
    for (int i = 0; i < n; ++i) {
        int value = symbolValues[s[i]];
        if (i < n - 1 && value < symbolValues[s[i + 1]]) {
            ans -= value;
        } else
            ans += value;
    }
    return ans;
}

void L13_romanToInt::test(){
    string roman;
    roman = "III";
    cout << romanToInt(roman) << endl;
    roman = "IV";
    cout << romanToInt(roman) << endl;
    roman = "IX";
    cout << romanToInt(roman) << endl;
    roman = "LVIII";
    cout << romanToInt(roman) << endl;
    roman = "MCMXCIV";
    cout << romanToInt(roman) << endl;
}
