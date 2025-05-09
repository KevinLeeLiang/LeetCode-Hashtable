//
// Created by garen_lee on 2025/5/9.
/**
  ******************************************************************************
  * @file           : L205_isIsomorphic.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/9
  ******************************************************************************
  */
//

#ifndef LEETCODE_HASHTABLE_L205_ISISOMORPHIC_H
#define LEETCODE_HASHTABLE_L205_ISISOMORPHIC_H

#include "util.h"
class L205_isIsomorphic : public LeetcodeHashtable {
private:
    bool isIsomorphic(string s, string t);
public:
    L205_isIsomorphic() {}
    void test();
};


#endif //LEETCODE_HASHTABLE_L205_ISISOMORPHIC_H
