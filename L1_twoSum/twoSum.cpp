//
// Created by garen-lee on 2025/1/29.
/**
  ******************************************************************************
  * @file           : twoSum.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/1/29
  ******************************************************************************
  */
//

#include "twoSum.h"
#include "unordered_map"
vector<int> L1_twoSum::twoSum(vector<int> &nums, int target) {
    unordered_map<int, int> hash;
    for (int i = 0; i < nums.size(); i++) {
        if (hash.find(target - nums[i]) != hash.end()) {
            return {hash[target - nums[i]], i};
        }
        hash[nums[i]] = i;
    }
    return {};
}

void L1_twoSum::test() {
    vector<int> nums, ans;
    int target;
    nums = {2, 7, 11, 15};
    target = 9;
    ans = twoSum(nums, target);
    print_vector(ans);
    nums = {3, 2, 4};
    target = 6;
    ans = twoSum(nums, target);
    print_vector(ans);
    nums = {3, 3};
    target = 6;
    ans = twoSum(nums, target);
    print_vector(ans);
}

