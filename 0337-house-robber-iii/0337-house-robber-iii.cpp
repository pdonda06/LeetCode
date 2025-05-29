/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

 class Solution {
public:
    pair<int, int> robSub(TreeNode* root) {
        if (!root) return {0, 0}; // {include, exclude}

        auto left = robSub(root->left);
        auto right = robSub(root->right);

        int include = root->val + left.second + right.second;
        int exclude = max(left.first, left.second) + max(right.first, right.second);

        return {include, exclude};
    }

    int rob(TreeNode* root) {
        auto result = robSub(root);
        return max(result.first, result.second);
    }
};
