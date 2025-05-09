//
// Created by garen_lee on 2025/5/9.
/**
  ******************************************************************************
  * @file           : L208_Trie.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/9
  ******************************************************************************
  */
//

#ifndef LEETCODE_HASHTABLE_L208_TRIE_H
#define LEETCODE_HASHTABLE_L208_TRIE_H

#include "util.h"
namespace L208 {
    class Trie {
    public:
        Trie() : children(26), isEnd(false) {}
        void insert(string word) {
            Trie* node = this;
            for (char ch : word) {
                int index = ch - 'a';
                if (!node->children[index]) {
                    node->children[index] = new Trie();
                }
                node = node->children[index];
            }
            node->isEnd = true;
        }
        bool search(string word) {
            Trie* node = searchPrefix(word);
            return node != nullptr && node->isEnd;
        }
        bool startsWith(string prefix) {
            Trie* node = searchPrefix(prefix);
            return node != nullptr;
        }
    private:
        Trie* searchPrefix(string prefix) {
            Trie* node = this;
            for (char ch : prefix) {
                int index = ch - 'a';
                if (!node->children[index]) {
                    return nullptr;
                }
                node = node->children[index];
            }
            return node;
        }
        vector<Trie*> children;
        bool isEnd;
    };
}

class L208_Trie : public LeetcodeHashtable {
public:
    L208_Trie() {}
    void test();
};


#endif //LEETCODE_HASHTABLE_L208_TRIE_H
