//
// Created by garen-lee on 2025/1/29.
/**
  ******************************************************************************
  * @file           : util.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/1/29
  ******************************************************************************
  */
//

#ifndef LEETCODE_HASHTABLE_UTIL_H
#define LEETCODE_HASHTABLE_UTIL_H
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <ctime>
#include <climits>
#include <cstdint>
#include<cstdarg>
using namespace std;

class LeetcodeHashtable{
public:
    LeetcodeHashtable() {}
    ~LeetcodeHashtable() {}
    virtual void test() = 0;
};

template<typename T>
void print_vector(vector<T> &vec) {
    for (auto &item : vec) {
        cout << item << " ";
    }
    cout << endl;
    cout <<  "__________" << endl;
}
#endif //LEETCODE_HASHTABLE_UTIL_H
