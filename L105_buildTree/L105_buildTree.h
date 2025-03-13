//
// Created by garen_lee on 2025/3/13.
/**
  ******************************************************************************
  * @file           : L105_buildTree.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/13
  ******************************************************************************
  */
//

#ifndef LEETCODE_HASHTABLE_L105_BUILDTREE_H
#define LEETCODE_HASHTABLE_L105_BUILDTREE_H

#include "util.h"
class L105_buildTree : public LeetcodeHashtable {
private:
    TreeNode* myBuildTree(const vector<int>& preorder, const vector<int>& inorder, int preorder_left,
                          int preorder_right, int inorder_left, int inorder_right);
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder);
    unordered_map<int, int> index;
public:
    L105_buildTree() {}
    void test();
};


#endif //LEETCODE_HASHTABLE_L105_BUILDTREE_H
