//
// Created by garen_lee on 2025/2/27.
/**
  ******************************************************************************
  * @file           : L41_firstMissingPositive.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/27
  ******************************************************************************
  */
//

#include "L41_firstMissingPositive.h"

int L41_firstMissingPositive::firstMissingPositive(vector<int> &nums) {
    int n = nums.size();
    for (int& num: nums) {
        if (num <= 0) {
            num = n + 1;
        }
    }
    for (int i = 0; i < n; ++i) {
        int num = abs(nums[i]);
        if (num <= n) {
            nums[num - 1] = -abs(nums[num - 1]);
        }
    }
    for (int i = 0; i < n; ++i) {
        if (nums[i] > 0) {
            return i + 1;
        }
    }
    return n + 1;
}

void L41_firstMissingPositive::test() {
    vector<int> nums = {1, 2, 0};
    int result = firstMissingPositive(nums);
    cout << result << endl;
    nums = {3, 4, -1, 1};
    result = firstMissingPositive(nums);
    cout << result << endl;
    nums = {7, 8, 9, 11, 12};
    result = firstMissingPositive(nums);
    cout << result << endl;
}