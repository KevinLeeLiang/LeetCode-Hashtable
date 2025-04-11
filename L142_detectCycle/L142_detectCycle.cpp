//
// Created by garen_lee on 2025/4/11.
/**
  ******************************************************************************
  * @file           : L142_detectCycle.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/11
  ******************************************************************************
  */
//

#include "L142_detectCycle.h"

ListNode* L142_detectCycle::detectCycle(ListNode *head) {
    unordered_set<ListNode*>set;
    while (head) {
        if (set.find(head) != set.end()) {
            return head;
        }
        set.insert(head);
        head = head->next;
    }
    return nullptr;
}

void L142_detectCycle::test() {
    vector<int>nums = {3,2,0,-4};
    int pos = 1;
    ListNode* head = createLinkNode(nums, pos);
    ListNode* res = detectCycle(head);
    cout << res->val << endl;
    nums = {1,2};
    pos = 0;
    head = createLinkNode(nums, pos);
    res = detectCycle(head);
    cout << res->val << endl;
}