//
// Created by garen_lee on 2025/2/27.
/**
  ******************************************************************************
  * @file           : L49_groupAnagrams.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/27
  ******************************************************************************
  */
//

#include "L49_groupAnagrams.h"

vector<vector<string>> L49_groupAnagrams::groupAnagrams(vector<string>& strs) {
    vector<vector<string>> result;
    unordered_map<string, vector<string>> hash;
    for (auto str : strs) {
        string key = str;
        sort(key.begin(), key.end());
        if (hash.find(key) == hash.end()) {
            hash[key] = vector<string>{str};
        } else {
            hash[key].push_back(str);
        }
    }
    for (auto it = hash.begin(); it != hash.end(); it++)
        result.push_back(it->second);
    return result;
}
void L49_groupAnagrams::test() {
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> result = groupAnagrams(strs);
    print_vector_vector(result);
    strs = {""};
    result = groupAnagrams(strs);
    print_vector_vector(result);
    strs = {"a"};
    result = groupAnagrams(strs);
    print_vector_vector(result);
}