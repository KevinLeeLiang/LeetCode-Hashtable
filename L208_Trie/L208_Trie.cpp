//
// Created by garen_lee on 2025/5/9.
/**
  ******************************************************************************
  * @file           : L208_Trie.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/9
  ******************************************************************************
  */
//

#include "L208_Trie.h"
using namespace L208;
void L208_Trie::test() {
    Trie trie;
    trie.insert("apple");
    cout << trie.search("apple") << endl;
    cout << trie.search("app") << endl;
    cout << trie.startsWith("app") << endl;
    trie.insert("app");
    cout << trie.search("app") << endl;
}