//
// Created by garen_lee on 2025/4/18.
/**
  ******************************************************************************
  * @file           : L160_getIntersectionNode.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/18
  ******************************************************************************
  */
//

#ifndef LEETCODE_HASHTABLE_L160_GETINTERSECTIONNODE_H
#define LEETCODE_HASHTABLE_L160_GETINTERSECTIONNODE_H

#include "util.h"
class L160_getIntersectionNode : public LeetcodeHashtable {
private:
    ListNode *createIntersectionListNode(vector<int> &nums, ListNode* headA, int skipA, int skipB);
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB);

public:
    L160_getIntersectionNode() {}
    void test();
};


#endif //LEETCODE_HASHTABLE_L160_GETINTERSECTIONNODE_H
