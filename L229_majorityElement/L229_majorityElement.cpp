//
// Created by garen_lee on 2025/5/23.
/**
  ******************************************************************************
  * @file           : L229_majorityElement.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/23
  ******************************************************************************
  */
//

#include "L229_majorityElement.h"

vector<int> L229_majorityElement::majorityElement(vector<int>& nums) {
    int c = nums.size() / 3;
    unordered_map<int, int> map;
    vector<int> res;
    for (int i = 0; i < nums.size(); i++) {
        map[nums[i]]++;
    }
    for (auto it = map.begin(); it != map.end(); it++) {
        if (it->second > c) {
            res.push_back(it->first);
        }
    }
    return res;
}

void L229_majorityElement::test() {
    vector<int> nums = {3,2,3};
    vector<int>res = majorityElement(nums);
    print_vector(res);
    nums = {1};
    res = majorityElement(nums);
    print_vector(res);
    nums = {1,2};
    res = majorityElement(nums);
    print_vector(res);
    nums = {2,2};
    res = majorityElement(nums);
    print_vector(res);
}