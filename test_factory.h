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
#include "util/util.h"
class test_factory {
private:
    void buildSolution(string title) {
        if (title == "L1") {
            std::shared_ptr<L1_twoSum> tmp= std::make_shared<L1_twoSum>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp);
        } else if (title == "L3") {
            std::shared_ptr<L3_lengthOfLongestSubstring> tmp1= std::make_shared<L3_lengthOfLongestSubstring>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp1);
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
