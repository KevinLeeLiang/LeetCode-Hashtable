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
#include "L36_isValidSudoku/L36_isValidSudoku.h"
#include "L37_solveSudoku/L37_solveSudoku.h"
#include "L41_firstMissingPositive/L41_firstMissingPositive.h"
#include "L49_groupAnagrams/L49_groupAnagrams.h"
#include "L73_setZeroes/L73_setZeros.h"
#include "L76_minWindow/L76_minWindow.h"

class test_factory {
private:
    void buildSolution(string title) {
        if (title == "L1") {
            std::shared_ptr<L1_twoSum> tmp = std::make_shared<L1_twoSum>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp);
        } else if (title == "L3") {
            std::shared_ptr<L3_lengthOfLongestSubstring> tmp = std::make_shared<L3_lengthOfLongestSubstring>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp);
        } else if (title == "L12") {
            std::shared_ptr<L12_intToRoman> tmp = std::make_shared<L12_intToRoman>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp);
        } else if (title == "L13") {
            std::shared_ptr<L13_romanToInt> tmp = std::make_shared<L13_romanToInt>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp);
        } else if (title == "L17") {
            std::shared_ptr<L17_letterCombinations> tmp = std::make_shared<L17_letterCombinations>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp);
        } else if (title == "L30") {
            std::shared_ptr<L30_findSubstring> tmp = std::make_shared<L30_findSubstring>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp);
        } else if (title == "L36") {
            std::shared_ptr<L36_isValidSudoku> tmp = std::make_shared<L36_isValidSudoku>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp);
        } else if (title == "L37") {
            std::shared_ptr<L37_solveSudoku> tmp = std::make_shared<L37_solveSudoku>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp);
        } else if (title == "L41") {
            std::shared_ptr<L41_firstMissingPositive> tmp = std::make_shared<L41_firstMissingPositive>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp);
        } else if (title == "L49") {
            std::shared_ptr<L49_groupAnagrams> tmp = std::make_shared<L49_groupAnagrams>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp);
        } else if (title == "L73") {
            std::shared_ptr<L73_setZeros> tmp = std::make_shared<L73_setZeros>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp);
        } else if (title == "L76") {
            std::shared_ptr<L76_minWindow> tmp = std::make_shared<L76_minWindow>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp);
        } else {
            cout << "no such solution" << endl;
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
