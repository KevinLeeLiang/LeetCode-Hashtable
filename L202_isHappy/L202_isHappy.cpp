//
// Created by garen-lee on 2025/5/2.
/**
  ******************************************************************************
  * @file           : L202_isHappy.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/2
  ******************************************************************************
  */
//

#include "L202_isHappy.h"

int L202_isHappy::getNext(int n) {
    int totalSum = 0;
    while (n > 0) {
        int d = n % 10;
        n = n / 10;
        totalSum += d * d;
    }
    return totalSum;
}

bool L202_isHappy::isHappy(int n) {
    int slow = n, fast = n;
    do {
        slow = getNext(slow);
        fast = getNext(getNext(fast));
    } while (slow != fast);
    return slow == 1;
}

void L202_isHappy::test() {
    int n = 19;
    cout << isHappy(n) << endl;
    n = 2;
    cout << isHappy(n) << endl;
}