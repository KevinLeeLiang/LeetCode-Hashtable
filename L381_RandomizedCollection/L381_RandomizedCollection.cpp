//
// Created by garen_lee on 2025/7/4.
/**
  ******************************************************************************
  * @file           : L381_RandomizedCollection.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/4
  ******************************************************************************
  */
//

#include "L381_RandomizedCollection.h"

class RandomizedCollection {
private:
    unordered_map<int, unordered_set<int>> idx;
    vector<int> nums;
public:
    RandomizedCollection() {

    }

    bool insert(int val) {
        nums.push_back(val);
        idx[val].insert(nums.size() - 1);
        return idx[val].size() == 1;
    }

    bool remove(int val) {
        if (idx.find(val) == idx.end()) {
            return false;
        }
        int i = *(idx[val].begin());
        nums[i] = nums.back();
        idx[val].erase(i);
        idx[nums[i]].erase(nums.size() - 1);
        if (i < nums.size() - 1) {
            idx[nums[i]].insert(i);
        }
        if (idx[val].size() == 0) {
            idx.erase(val);
        }
        nums.pop_back();
        return true;
    }

    int getRandom() {
        return nums[rand() % nums.size()];
    }
};

void L381_RandomizedCollection::test() {
    RandomizedCollection obj;
    cout << obj.insert(1) << endl;
    cout << obj.insert(1) << endl;
    cout << obj.insert(2) << endl;
    cout << obj.getRandom() << endl;
    cout << obj.remove(1) << endl;
    cout << obj.getRandom() << endl;
}