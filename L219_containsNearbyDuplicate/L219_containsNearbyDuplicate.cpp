//
// Created by garen_lee on 2025/5/16.
/**
  ******************************************************************************
  * @file           : L219_containsNearbyDuplicate.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/16
  ******************************************************************************
  */
//

#include "L219_containsNearbyDuplicate.h"

bool L219_containsNearbyDuplicate::containsNearbyDuplicate(vector<int> &nums, int k) {
    unordered_set<int>s;
    for (int i = 0; i < nums.size(); i++) {
        if (s.find(nums[i]) != s.end()) {
            return true;
        }
        s.insert(nums[i]);
        if (s.size() > k) {
            s.erase(nums[i - k]);
        }
    }
    return false;
}

void L219_containsNearbyDuplicate::test() {
    vector<int> nums = {1, 2, 3, 1};
    cout << containsNearbyDuplicate(nums, 3) << endl;
    nums = {1, 0, 1, 1};
    cout << containsNearbyDuplicate(nums, 1) << endl;
    nums = {1, 2, 3, 1, 2, 3};
    cout << containsNearbyDuplicate(nums, 2) << endl;
}