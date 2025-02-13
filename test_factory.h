//
// Created by garen-lee on 2025/1/29.
/**
  ******************************************************************************
  * @file           : test_factory.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/1/29
  ******************************************************************************
  */
//

#ifndef LEETCODE_HASHTABLE_TEST_FACTORY_H
#define LEETCODE_HASHTABLE_TEST_FACTORY_H
#include <memory>
#include "L1_twoSum/twoSum.h"
#include "L3_lengthOfLongestSubstring/lengthOfLongestSubstring.h"
#include "L12_intToRoman/L12_intToRoman.h"
#include "L13_romanToInt/L13_romanToInt.h"
#include "L17_letterCombinations/L17_letterCombinations.h"
#include "L30_findSubstring/L30_findSubstring.h"
class test_factory {
private:
    void buildSolution(string title) {
        if (title == "L1") {
            std::shared_ptr<L1_twoSum> tmp= std::make_shared<L1_twoSum>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp);
        } else if (title == "L3") {
            std::shared_ptr<L3_lengthOfLongestSubstring> tmp1= std::make_shared<L3_lengthOfLongestSubstring>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp1);
        } else if (title == "L12") {
            std::shared_ptr<L12_intToRoman> tmp2= std::make_shared<L12_intToRoman>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp2);
        } else if (title == "L13") {
            std::shared_ptr<L13_romanToInt> tmp3= std::make_shared<L13_romanToInt>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp3);
        } else if (title == "L17") {
            std::shared_ptr<L17_letterCombinations> tmp4= std::make_shared<L17_letterCombinations>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp4);
        } else if (title == "L30") {
            std::shared_ptr<L30_findSubstring> tmp5= std::make_shared<L30_findSubstring>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp5);
        }
    }
public:
    test_factory(string title) {
        cout << "test " << title << endl;
        buildSolution(title);
    }
    void test() {
        solution_->test();
    }
    ~test_factory() {}

private:
    std::shared_ptr<LeetcodeHashtable> solution_;
};


#endif //LEETCODE_HASHTABLE_TEST_FACTORY_H
