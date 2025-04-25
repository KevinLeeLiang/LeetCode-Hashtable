//
// Created by garen_lee on 2025/4/25.
/**
  ******************************************************************************
  * @file           : L169_majorityElement.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/25
  ******************************************************************************
  */
//

#include "L169_majorityElement.h"

int L169_majorityElement::majorityElement(vector<int>& nums) {
    unordered_map<int, int>map;
    int majority = 0, cnt = 0;
    for (int num : nums) {
        map[num]++;
        if (map[num] > cnt) {
            majority = num;
            cnt = map[num];
        }
    }
    return majority;
}

void L169_majorityElement::test() {
    vector<int> nums = {3,2,3};
    cout << majorityElement(nums) << endl;
    nums = {2,2,1,1,1,2,2};
    cout << majorityElement(nums) << endl;
}