//
// Created by garen_lee on 2025/6/6.
/**
  ******************************************************************************
  * @file           : L290_wordPattern.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/6
  ******************************************************************************
  */
//

#include "L290_wordPattern.h"
#include <sstream>
bool L290_wordPattern::wordPattern(std::string pattern, std::string s) {
    std::istringstream iss(s);
    string word;
    vector<string> words;
    while (std::getline(iss, word, ' ')) {
        if (!word.empty()) {
            words.push_back(word);
        }
    }
    unordered_map<char, string>map;
    unordered_map<string, char>umap;
    if (pattern.size() != words.size()) {
        return false;
    }
    for (int i = 0; i < pattern.size(); i++) {
        map[pattern[i]] = words[i];
        umap[words[i]] = pattern[i];
    }
    for (int i = 0; i < pattern.size(); i++) {
        if (map.find(pattern[i]) == map.end()) {
            if (umap.find(words[i]) != umap.end()) {
                return false;
            }
            map[pattern[i]] = words[i];
        } else {
            if (map[pattern[i]] != words[i]) {
                return false;
            }
            if (umap[words[i]] != pattern[i]) {
                return false;
            }

        }
    }
    return true;
}

void L290_wordPattern::test() {
    std::string pattern = "abba";
    std::string s = "dog cat cat dog";
    std::cout << wordPattern(pattern, s) << std::endl;
    pattern = "abba";
    s = "dog cat cat fish";
    std::cout << wordPattern(pattern, s) << std::endl;
    pattern = "aaaa";
    s = "dog cat cat dog";
    std::cout << wordPattern(pattern, s) << std::endl;
    pattern = "abba";
    s = "dog dog dog dog";
    std::cout << wordPattern(pattern, s) << std::endl;
}