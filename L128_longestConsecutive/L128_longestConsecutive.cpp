//
// Created by garen_lee on 2025/3/27.
/**
  ******************************************************************************
  * @file           : L128_longestConsecutive.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/27
  ******************************************************************************
  */
//

#include "L128_longestConsecutive.h"

int L128_longestConsecutive::longestConsecutive(vector<int> &nums) {
    unordered_set<int> num_set;
    for (const int& num : nums) {
        num_set.insert(num);
    }

    int longestStreak = 0;

    for (const int& num : num_set) {
        if (!num_set.count(num - 1)) {
            int currentNum = num;
            int currentStreak = 1;

            while (num_set.count(currentNum + 1)) {
                currentNum += 1;
                currentStreak += 1;
            }

            longestStreak = max(longestStreak, currentStreak);
        }
    }
    return longestStreak;
}

void L128_longestConsecutive::test() {
    vector<int>nums = {100,4,200,1,3,2};
    cout << longestConsecutive(nums) << endl;
    nums = {0,3,7,2,5,8,4,6,0,1};
    cout << longestConsecutive(nums) << endl;
    nums = {1,0,1,2};
    cout << longestConsecutive(nums) << endl;
}