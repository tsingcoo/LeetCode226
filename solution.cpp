//
// Created by 王青龙 on 2017/3/13.
//

#include <algorithm>
#include "solution.h"

TreeNode *Solutin::invertTree(TreeNode *root) {
    if (root != nullptr) {
        invertTree(root->left);
        invertTree(root->right);
        std::swap(root->left, root->right);
    }
    return root;
}
