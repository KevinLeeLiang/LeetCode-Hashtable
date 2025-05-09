//
// Created by garen_lee on 2025/5/9.
/**
  ******************************************************************************
  * @file           : L205_isIsomorphic.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/9
  ******************************************************************************
  */
//

#include "L205_isIsomorphic.h"

bool L205_isIsomorphic::isIsomorphic(std::string s, std::string t) {
    unordered_map<char, char> s2t;
    unordered_map<char, char> t2s;
    for (int i = 0; i < s.size(); i++) {
        char x = s[i], y = t[i];
        if ((s2t.find(x) != s2t.end() && s2t[x] != y) || (t2s.find(y) != t2s.end() && t2s[y] != x)) {
            return false;
        } else {
            s2t[x] = y;
            t2s[y] = x;
        }
    }
    return true;
}


void L205_isIsomorphic::test() {
    std::string s = "egg";
    std::string t = "add";
    std::cout << isIsomorphic(s, t) << std::endl;
    s = "foo";
    t = "bar";
    std::cout << isIsomorphic(s, t) << std::endl;
    s = "paper";
    t = "title";
    std::cout << isIsomorphic(s, t) << std::endl;
}