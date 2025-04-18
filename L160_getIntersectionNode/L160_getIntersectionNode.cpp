//
// Created by garen_lee on 2025/4/18.
/**
  ******************************************************************************
  * @file           : L160_getIntersectionNode.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/18
  ******************************************************************************
  */
//

#include "L160_getIntersectionNode.h"

ListNode* L160_getIntersectionNode::createIntersectionListNode(vector<int> &nums, ListNode *headA, int skipA,
                                                               int skipB) {
    ListNode* head = create_list(nums);
    ListNode* tmpB = head;
    for (int i = 0; i < skipB - 1; ++i) {
        tmpB = tmpB->next;
    }
    for (int i = 0; i < skipA; ++i) {
        headA = headA->next;
    }
    tmpB->next = headA;;
    return head;
}

ListNode *L160_getIntersectionNode::getIntersectionNode(ListNode *headA, ListNode *headB) {
    if (headA == nullptr || headB == nullptr) {
        return nullptr;
    }
    auto *pA = headA, *pB = headB;
    while (pA != pB) {
        pA = pA == nullptr ? headB : pA->next;
        pB = pB == nullptr ? headA : pB->next;
    }
    return pA;
}

void L160_getIntersectionNode::test() {
    vector<int> nums1 = {4,1,8,4,5};
    vector<int> nums2 = {5,6,1,8,4,5};
    ListNode *headA = create_list(nums1);
    headA = create_list(nums1);
    auto lista = headA;
    ListNode* headB = createIntersectionListNode(nums2, lista, 2, 3);
    cout << getIntersectionNode(headA, headB)->val << endl;
    nums1 = {1,9,1,2,4};
    nums2 = {3,2,4};
    headA = create_list(nums1);
    lista = headA;
    headB = createIntersectionListNode(nums2, lista, 3, 1);
    cout << getIntersectionNode(headA, headB)->val << endl;
}