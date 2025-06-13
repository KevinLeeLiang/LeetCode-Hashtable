//
// Created by garen_lee on 2025/6/13.
/**
  ******************************************************************************
  * @file           : L347_topKFrequent.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/13
  ******************************************************************************
  */
//

#include "L347_topKFrequent.h"

vector<int> L347_topKFrequent::topKFrequent(vector<int> &nums, int k) {
    unordered_map<int, int> map;
    for (auto num : nums){
        map[num]++;
    }
    auto cmp = [](pair<int, int>&a, pair<int, int>& b) {
        return a.second > b.second;
    };
    priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)> pq(cmp);
    for (auto &pair : map){
        pq.push(pair);
        if (pq.size() > k){
            pq.pop();
        }
    }
    vector<int> res;
    while (!pq.empty()){
        res.push_back(pq.top().first);
        pq.pop();
    }
    return res;
}

void L347_topKFrequent::test() {
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = 2;
    vector<int> res = topKFrequent(nums, k);
    print_vector(res);
    nums = {1};
    k = 1;
    res = topKFrequent(nums, k);
    print_vector(res);
}