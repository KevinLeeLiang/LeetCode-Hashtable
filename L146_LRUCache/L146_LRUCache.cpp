//
// Created by garen_lee on 2025/4/11.
/**
  ******************************************************************************
  * @file           : L146_LRUCache.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/11
  ******************************************************************************
  */
//

#include "L146_LRUCache.h"
using namespace L146;

LRUCache::LRUCache(int capacity){
    this->capacity = capacity;
    id = 0;
}
int LRUCache::get(int key){
    if (ump.find(key) != ump.end()) {
        que.push({key, id});
        ump2[key] = id++;
        return ump[key];
    } else {
        return -1;
    }
}
void LRUCache::put(int key, int value) {
    if (ump.find(key) == ump.end() && ump.size() == capacity) {
        while (!que.empty()) {
            int k = que.front().first;
            int cnt = que.front().second;
            if (cnt == ump2[k]) {
                ump.erase(k);
                ump2.erase(k);
                que.pop();
                break;
            }
            else
                que.pop();
        }
    }
    ump[key] = value;
    ump2[key] = id;
    que.push({key, id++});
}

void L146_LRUCache::test() {
    LRUCache cache = LRUCache(2);
    cache.put(1, 1);
    cache.put(2, 2);
    cout << cache.get(1) << endl;
    cache.put(3, 3);
    cout << cache.get(2) << endl;
    cache.put(4, 4);
    cout << cache.get(1) << endl;
    cout << cache.get(3) << endl;
    cout <<cache.get(4) << endl;
}