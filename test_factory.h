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
#include "L105_buildTree/L105_buildTree.h"
#include "L106_buildTree/L106_buildTree.h"
#include "L126_findLadders/L126_findLadders.h"
#include "L127_ladderLength/L127_ladderLength.h"
#include "L128_longestConsecutive/L128_longestConsecutive.h"
#include "L139_wordBreak/L139_wordBreak.h"
#include "L140_wordBreak/L140_wordBreak.h"
#include "L141_hasCycle/L141_hasCycle.h"
#include "L142_detectCycle/L142_detectCycle.h"
#include "L146_LRUCache/L146_LRUCache.h"
#include "L149_maxPoints/L149_maxPoints.h"
#include "L160_getIntersectionNode/L160_getIntersectionNode.h"
#include "L166_fractionToDecimal/L166_fractionToDecimal.h"
#include "L169_majorityElement/L169_majorityElement.h"
#include "L187_findRepeatedDnaSequences/L187_findRepeatedDnaSequences.h"
#include "L205_isIsomorphic/L205_isIsomorphic.h"
#include "L208_Trie/L208_Trie.h"
#include "L217_containsDuplicate/L217_containsDuplicate.h"
#include "L219_containsNearbyDuplicate/L219_containsNearbyDuplicate.h"
#include "L229_majorityElement/L229_majorityElement.h"
#include "L242_isAnagram/L242_isAnagram.h"
#include "L264_nthUglyNumber/L264_nthUglyNumber.h"
#include "L268_missingNumber/L268_missingNumber.h"
#include "L290_wordPattern/L290_wordPattern.h"
#include "L299_getHint/L299_getHint.h"
#include "L336_palindromePairs/L336_palindromePairs.h"
#include "L347_topKFrequent/L347_topKFrequent.h"
#include "L349_intersection/L349_intersection.h"
#include "L350_intersect/L350_intersect.h"
#include "L355_Twitter/L355_Twitter.h"
#include "L380_RandomizedSet/L380_RandomizedSet.h"

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
        } else if (title == "L105") {
            std::shared_ptr<L105_buildTree> tmp = std::make_shared<L105_buildTree>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp);
        } else if (title == "L106") {
            std::shared_ptr<L106_buildTree> tmp = std::make_shared<L106_buildTree>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp);
        } else if (title == "L126") {
            std::shared_ptr<L126_findLadders> tmp = std::make_shared<L126_findLadders>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp);
        } else if (title == "L127") {
            std::shared_ptr<L127_ladderLength> tmp = std::make_shared<L127_ladderLength>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp);
        } else if (title == "L128") {
            std::shared_ptr<L128_longestConsecutive> tmp = std::make_shared<L128_longestConsecutive>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp);
        } else if (title == "L139") {
            std::shared_ptr<L139_wordBreak> tmp = std::make_shared<L139_wordBreak>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp);
        } else if (title == "L140") {
            std::shared_ptr<L140_wordBreak> tmp = std::make_shared<L140_wordBreak>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp);
        } else if (title == "L141") {
            std::shared_ptr<L141_hasCycle> tmp = std::make_shared<L141_hasCycle>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp);
        } else if (title == "L142") {
            std::shared_ptr<L142_detectCycle> tmp = std::make_shared<L142_detectCycle>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp);
        } else if (title == "L146") {
            std::shared_ptr<L146_LRUCache> tmp = std::make_shared<L146_LRUCache>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp);
        } else if (title == "L149") {
            std::shared_ptr<L149_maxPoints> tmp = std::make_shared<L149_maxPoints>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp);
        } else if (title == "L160") {
            std::shared_ptr<L160_getIntersectionNode> tmp = std::make_shared<L160_getIntersectionNode>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp);
        } else if (title == "L166") {
            std::shared_ptr<L166_fractionToDecimal> tmp = std::make_shared<L166_fractionToDecimal>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp);
        } else if (title == "L169") {
            std::shared_ptr<L169_majorityElement> tmp = std::make_shared<L169_majorityElement>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp);
        } else if (title == "L187") {
            std::shared_ptr<L187_findRepeatedDnaSequences> tmp = std::make_shared<L187_findRepeatedDnaSequences>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp);
        } else if (title == "L205") {
            std::shared_ptr<L205_isIsomorphic> tmp = std::make_shared<L205_isIsomorphic>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp);
        } else if (title == "L208") {
            std::shared_ptr<L208_Trie> tmp = std::make_shared<L208_Trie>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp);
        } else if (title == "L217") {
            std::shared_ptr<L217_containsDuplicate> tmp = std::make_shared<L217_containsDuplicate>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp);
        } else if (title == "L219") {
            std::shared_ptr<L219_containsNearbyDuplicate> tmp = std::make_shared<L219_containsNearbyDuplicate>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp);
        } else if (title == "L229") {
            std::shared_ptr<L229_majorityElement> tmp = std::make_shared<L229_majorityElement>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp);
        } else if (title == "L242") {
            std::shared_ptr<L242_isAnagram> tmp = std::make_shared<L242_isAnagram>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp);
        } else if (title == "L264") {
            std::shared_ptr<L264_nthUglyNumber> tmp = std::make_shared<L264_nthUglyNumber>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp);
        } else if (title == "L268") {
            std::shared_ptr<L268_missingNumber> tmp = std::make_shared<L268_missingNumber>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp);
        } else if (title == "L290") {
            std::shared_ptr<L290_wordPattern> tmp = std::make_shared<L290_wordPattern>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp);
        } else if (title == "L299") {
            std::shared_ptr<L299_getHint> tmp = std::make_shared<L299_getHint>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp);
        } else if (title == "L336") {
            std::shared_ptr<L336_palindromePairs> tmp = std::make_shared<L336_palindromePairs>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp);
        } else if (title == "L347") {
            std::shared_ptr<L347_topKFrequent> tmp = std::make_shared<L347_topKFrequent>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp);
        } else if (title == "L349") {
            std::shared_ptr<L349_intersection> tmp = std::make_shared<L349_intersection>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp);
        } else if (title == "L350") {
            std::shared_ptr<L350_intersect> tmp = std::make_shared<L350_intersect>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp);
        } else if (title == "L355") {
            std::shared_ptr<L355_Twitter> tmp = std::make_shared<L355_Twitter>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp);
        } else if (title == "L380") {
            std::shared_ptr<L380_RandomizedSet> tmp = std::make_shared<L380_RandomizedSet>();
            solution_ = std::dynamic_pointer_cast<LeetcodeHashtable>(tmp);
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
