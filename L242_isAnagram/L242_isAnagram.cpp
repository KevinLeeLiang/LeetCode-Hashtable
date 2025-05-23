//
// Created by garen_lee on 2025/5/23.
/**
  ******************************************************************************
  * @file           : L242_isAnagram.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/23
  ******************************************************************************
  */
//

#include "L242_isAnagram.h"

bool L242_isAnagram::isAnagram(string s, string t) {
    unordered_map<char, int>map;
    for (auto i : s) {
        map[i]++;
    }
    for (auto i : t) {
        map[i]--;
    }
    for (auto i : map) {
        if (i.second != 0) {
            return false;
        }
    }
    return true;
}

void L242_isAnagram::test() {
    string s = "anagram", t = "nagaram";
    cout << isAnagram(s, t) << endl;
    s = "rat", t = "car";
    cout << isAnagram(s, t) << endl;
}