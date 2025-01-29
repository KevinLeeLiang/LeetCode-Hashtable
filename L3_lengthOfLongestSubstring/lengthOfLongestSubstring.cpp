//
// Created by garen-lee on 2025/1/29.
/**
  ******************************************************************************
  * @file           : lengthOfLongestSubstring.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/1/29
  ******************************************************************************
  */
//

#include "lengthOfLongestSubstring.h"
int L3_lengthOfLongestSubstring::lengthOfLongestSubstring(string s) {
    unordered_set<char>map;
    int ans = 0, rk = -1;
    for (int i = 0; i < s.size(); i++) {
        if (i != 0) {
            map.erase(s[i - 1]);
        }
        while (rk + 1 < s.size() && !map.count(s[rk + 1])) {
            // 不断地移动右指针
            map.insert(s[rk + 1]);
            ++rk;
        }
        ans = max(ans, rk - i + 1);
    }
    return ans;
}

void L3_lengthOfLongestSubstring::test() {
    string s;
    s = "abcabcbb";
    cout << lengthOfLongestSubstring(s) << endl;

    s = "bbbbb";
    cout << lengthOfLongestSubstring(s) << endl;

    s = "pwwkew";
    cout << lengthOfLongestSubstring(s) << endl;
}