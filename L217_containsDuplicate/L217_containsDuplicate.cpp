//
// Created by garen_lee on 2025/5/16.
/**
  ******************************************************************************
  * @file           : L217_containsDuplicate.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/16
  ******************************************************************************
  */
//

#include "L217_containsDuplicate.h"

bool L217_containsDuplicate::containsDuplicate(vector<int> &nums) {
    unordered_set<int> s;
    for (int i = 0; i < nums.size(); i++) {
        if (s.count(nums[i])) {
            return true;
        }
        s.insert(nums[i]);
    }
    return false;
}

void L217_containsDuplicate::test() {
    vector<int>nums = {1, 2, 3, 1};
    cout << containsDuplicate(nums) << endl;
    nums = {1, 2, 3, 4};
    cout << containsDuplicate(nums) << endl;
    nums = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    cout << containsDuplicate(nums) << endl;
}