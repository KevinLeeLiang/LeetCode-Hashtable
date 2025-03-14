//
// Created by garen_lee on 2025/3/13.
/**
  ******************************************************************************
  * @file           : L106_buildTree.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/13
  ******************************************************************************
  */
//

#include "L106_buildTree.h"

TreeNode *L106_buildTree::helper(int in_left, int in_right, vector<int> &inorder, vector<int> &postorder) {
    // 如果这里没有节点构造二叉树了，就结束
    if (in_left > in_right) {
        return nullptr;
    }

    // 选择 post_idx 位置的元素作为当前子树根节点
    int root_val = postorder[post_idx];
    TreeNode *root = new TreeNode(root_val);

    // 根据 root 所在位置分成左右两棵子树
    int index = idx_map[root_val];

    // 下标减一
    post_idx--;
    // 构造右子树
    root->right = helper(index + 1, in_right, inorder, postorder);
    // 构造左子树
    root->left = helper(in_left, index - 1, inorder, postorder);
    return root;
}

TreeNode *L106_buildTree::buildTree(vector<int> &inorder, vector<int> &postorder) {
// 从后序遍历的最后一个元素开始
    post_idx = (int) postorder.size() - 1;

    // 建立（元素，下标）键值对的哈希表
    int idx = 0;
    for (auto &val : inorder) {
        idx_map[val] = idx++;
    }
    return helper(0, (int) inorder.size() - 1, inorder, postorder);
}

void L106_buildTree::test() {
    vector<int> inorder = {9, 3, 15, 20, 7};
    vector<int> postorder = {9, 15, 7, 20, 3};
    TreeNode *root = buildTree(inorder, postorder);
    cout << print_tree(root) << endl;
    inorder = {-1};
    postorder = {-1};
    root = buildTree(inorder, postorder);
    cout << print_tree(root) << endl;
}