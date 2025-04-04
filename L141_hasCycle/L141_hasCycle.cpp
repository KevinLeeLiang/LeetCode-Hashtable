//
// Created by garen-lee on 2025/4/4.
/**
  ******************************************************************************
  * @file           : L141_hasCycle.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/4
  ******************************************************************************
  */
//

#include "L141_hasCycle.h"

bool L141_hasCycle::hasCycle(ListNode *head) {
    unordered_map<ListNode*, int> map;
    while (head) {
        if (map.find(head) != map.end()) {
            return true;
        }
        map[head] = 1;
        head = head->next;
    }
    return false;
}

void L141_hasCycle::test() {
    vector<int> nums = {3,2,0,4};
    int pos = 1;
    ListNode* head = createLinkNode(nums, pos);
    cout << hasCycle(head) << endl;
    nums = {1,2};
    pos = 0;
    head = createLinkNode(nums, pos);
    cout << hasCycle(head) << endl;
    nums = {1};
    pos = -1;
    head = createLinkNode(nums, pos);
    cout << hasCycle(head) << endl;
}