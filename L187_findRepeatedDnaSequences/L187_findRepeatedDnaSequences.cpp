//
// Created by garen-lee on 2025/5/2.
/**
  ******************************************************************************
  * @file           : L187_findRepeatedDnaSequences.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/2
  ******************************************************************************
  */
//

#include "L187_findRepeatedDnaSequences.h"
const int L = 10;
vector<string> L187_findRepeatedDnaSequences::findRepeatedDnaSequences(string s) {
    vector<string> ans;
    unordered_map<string, int> cnt;
    int n = s.length();
    for (int i = 0; i <= n - L; ++i) {
        string sub = s.substr(i, L);
        if (++cnt[sub] == 2) {
            ans.push_back(sub);
        }
    }
    return ans;
}

void L187_findRepeatedDnaSequences::test() {
    string s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT";
    vector<string>res = findRepeatedDnaSequences(s);
    print_vector(res);
    s = "AAAAAAAAAAAAA";
    res = findRepeatedDnaSequences(s);
    print_vector(res);
}