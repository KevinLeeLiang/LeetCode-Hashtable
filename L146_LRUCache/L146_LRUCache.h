//
// Created by garen_lee on 2025/4/11.
/**
  ******************************************************************************
  * @file           : L146_LRUCache.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/11
  ******************************************************************************
  */
//

#ifndef LEETCODE_HASHTABLE_L146_LRUCACHE_H
#define LEETCODE_HASHTABLE_L146_LRUCACHE_H

#include "util.h"
namespace L146 {
    struct DLinkedNode {
        int key, value;
        DLinkedNode* prev;
        DLinkedNode* next;
        DLinkedNode(): key(0), value(0), prev(nullptr), next(nullptr) {}
        DLinkedNode(int _key, int _value) : key(_key), value(_value), prev(nullptr), next(nullptr) {}
    };
    class LRUCache {
        typedef pair<int, int> PII;
    public:
        LRUCache(int capacity);
        int get(int key);
        void put(int key, int value);
    private:
        int capacity;
        queue<PII> que;
        unordered_map<int, int> ump;
        unordered_map<int, int> ump2;
        int id = 0;
    };
}
class L146_LRUCache : public LeetcodeHashtable {
public:
    L146_LRUCache(){}
    void test();
};


#endif //LEETCODE_HASHTABLE_L146_LRUCACHE_H
