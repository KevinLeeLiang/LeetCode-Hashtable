//
// Created by garen-lee on 2025/5/30.
/**
  ******************************************************************************
  * @file           : L264_nthUglyNumber.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/30
  ******************************************************************************
  */
//

#include "L264_nthUglyNumber.h"

int L264_nthUglyNumber::nthUglyNumber(int n) {
    vector<int>factors = {2,3,5};
    unordered_set<int>seen;
    priority_queue<int, vector<int>, greater<int>>heap;
    seen.insert(1);
    heap.push(1);
    int ugly = 0;
    for (int i = 0; i < n; ++i) {
        long curr = heap.top();
        heap.pop();
        ugly = curr;
        for (auto factor : factors) {
            long next = curr * factor;
            if (!seen.count(next)) {
                heap.push(next);
                seen.insert(next);
            }
        }
    }
    return ugly;
}

void L264_nthUglyNumber::test() {
    cout << nthUglyNumber(10) << endl;
    cout << nthUglyNumber(1) << endl;
}