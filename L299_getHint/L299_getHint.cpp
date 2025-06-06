//
// Created by garen_lee on 2025/6/6.
/**
  ******************************************************************************
  * @file           : L299_getHint.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/6
  ******************************************************************************
  */
//

#include "L299_getHint.h"

string L299_getHint::getHint(string secret, string guess) {
    int bulls = 0;
    vector<int> cntS(10), cntG(10);
    for (int i = 0; i < secret.size(); ++i) {
        if (secret[i] == guess[i]) {
            ++bulls;
        } else {
            ++cntS[secret[i] - '0'];
            ++cntG[guess[i] - '0'];
        }
    }
    int cows = 0;
    for (int i = 0; i < 10; ++i) {
        cows += min(cntS[i], cntG[i]);
    }
    return to_string(bulls) + "A" + to_string(cows) + "B";
}

void L299_getHint::test() {
    string secret = "1807";
    string guess = "7810";
    cout << getHint(secret, guess) << endl;
    secret  = "1123";
    guess = "0111";
    cout << getHint(secret, guess) << endl;
}