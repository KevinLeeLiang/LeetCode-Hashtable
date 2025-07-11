//
// Created by garen_lee on 2025/7/11.
/**
  ******************************************************************************
  * @file           : L387_firstUniqChar.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/11
  ******************************************************************************
  */
//

#include "L387_firstUniqChar.h"

int L387_firstUniqChar::firstUniqChar(string s) {
    unordered_map<int, int> frequency;
    for (char ch: s) {
        ++frequency[ch];
    }
    for (int i = 0; i < s.size(); ++i) {
        if (frequency[s[i]] == 1) {
            return i;
        }
    }
    return -1;
}

void L387_firstUniqChar::test() {
    string s = "leetcode";
    cout << firstUniqChar(s) << endl;
    s = "loveleetcode";
    cout << firstUniqChar(s) << endl;
    s = "aabb";
    cout << firstUniqChar(s) << endl;
}