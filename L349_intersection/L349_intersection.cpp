//
// Created by garen_lee on 2025/6/20.
/**
  ******************************************************************************
  * @file           : L349_intersection.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/20
  ******************************************************************************
  */
//

#include "L349_intersection.h"

vector<int> L349_intersection::intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int> res;
    unordered_set< int>set;
    for (auto & num : nums1) {
        set.insert(num);
    }
    for (auto & num : nums2) {
        if (set.count(num)) {
            res.push_back(num);
            set.erase(num);
        }
    }
    return res;
}

void L349_intersection::test() {
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};
    vector<int> res = intersection(nums1, nums2);
    print_vector( res);
    nums1 = {4, 9, 5};
    nums2 = {9, 4, 9, 8, 4};
    res = intersection(nums1, nums2);
    print_vector( res);
}