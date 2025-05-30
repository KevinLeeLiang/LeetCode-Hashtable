//
// Created by garen-lee on 2025/5/30.
/**
  ******************************************************************************
  * @file           : L268_missingNumber.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/30
  ******************************************************************************
  */
//

#include "L268_missingNumber.h"

int L268_missingNumber::missingNumber(vector<int>& nums) {
    unordered_set<int>set;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        set.insert(nums[i]);
    }
    for (int i = 0; i <= n; i++) {
        if (set.find(i) == set.end()) {
            return i;
        }
    }
    return -1;
}


void L268_missingNumber::test() {
    vector<int> nums = {3, 0, 1};
    int result = missingNumber(nums);
    cout << "result: " << result << endl;
    nums = {0, 1};
    result = missingNumber(nums);
    cout << "result: " << result << endl;
    nums = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    result = missingNumber(nums);
    cout << "result: " << result << endl;
}