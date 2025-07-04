//
// Created by garen_lee on 2025/7/4.
/**
  ******************************************************************************
  * @file           : L383_canConstruct.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/4
  ******************************************************************************
  */
//

#include "L383_canConstruct.h"

bool L383_canConstruct::canConstruct(string ransomNote, string magazine) {
    unordered_map<char, int>mag, note;
    for (char c : magazine) {
        mag[c]++;
    }
    for (char c : ransomNote) {
        if (mag[c] > 0) {
            mag[c]--;
        } else {
            return false;
        }
    }
    return true;
}

void L383_canConstruct::test() {
    string ransomNote = "a";
    string magazine = "b";
    cout << canConstruct(ransomNote, magazine) << endl;
    ransomNote = "aa";
    magazine = "ab";
    cout << canConstruct(ransomNote, magazine) << endl;
    ransomNote = "aa";
    magazine = "aab";
    cout << canConstruct(ransomNote, magazine) << endl;
}