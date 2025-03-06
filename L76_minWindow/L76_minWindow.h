//
// Created by garen_lee on 2025/3/6.
/**
  ******************************************************************************
  * @file           : L76_minWindow.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/6
  ******************************************************************************
  */
//

#ifndef LEETCODE_HASHTABLE_L76_MINWINDOW_H
#define LEETCODE_HASHTABLE_L76_MINWINDOW_H

#include "util.h"
class L76_minWindow : public LeetcodeHashtable {
private:
    string minWindow(string s, string t);
    bool check();
    unordered_map <char, int> ori, cnt;
public:
    L76_minWindow() {}
    void test();
};


#endif //LEETCODE_HASHTABLE_L76_MINWINDOW_H
