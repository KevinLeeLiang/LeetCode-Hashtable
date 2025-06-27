//
// Created by garen_lee on 2025/6/27.
/**
  ******************************************************************************
  * @file           : L380_RandomizedSet.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/27
  ******************************************************************************
  */
//

#include "L380_RandomizedSet.h"

class RandomizedSet {
public:
    RandomizedSet() {
        srand((unsigned)time(NULL));
    }

    bool insert(int val) {
        if (indices.count(val)) {
            return false;
        }
        int index = nums.size();
        nums.emplace_back(val);
        indices[val] = index;
        return true;
    }

    bool remove(int val) {
        if (!indices.count(val)) {
            return false;
        }
        int index = indices[val];
        int last = nums.back();
        nums[index] = last;
        indices[last] = index;
        nums.pop_back();
        indices.erase(val);
        return true;
    }

    int getRandom() {
        int randomIndex = rand()%nums.size();
        return nums[randomIndex];
    }
private:
    vector<int> nums;
    unordered_map<int, int> indices;
};

void L380_RandomizedSet::test() {
    RandomizedSet obj;
    cout << obj.insert(1) << endl;
    cout << obj.remove(2) << endl;
    cout << obj.insert(2) << endl;
    cout << obj.getRandom() << endl;
    cout << obj.remove(1) << endl;
    cout << obj.insert(2) << endl;
    cout << obj.getRandom() << endl;
}