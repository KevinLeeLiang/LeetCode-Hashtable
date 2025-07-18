//
// Created by garen_lee on 2025/7/18.
/**
  ******************************************************************************
  * @file           : L389_findTheDifference.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/18
  ******************************************************************************
  */
//

#include "L389_findTheDifference.h"

char L389_findTheDifference::findTheDifference(string s, string t) {
    int res = 0;
    for (char c : s) {
        res ^= c;
    }
    for (char c : t) {
        res ^= c;
    }
    return res;
}

void L389_findTheDifference::test() {
    string s = "abcd";
    string t = "abcde";
    cout << findTheDifference(s, t) << endl;
    s = "";
    t = "y";
    cout << findTheDifference(s, t) << endl;
}