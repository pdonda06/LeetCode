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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        if (root == nullptr) return result;

        stack<TreeNode*> s1, s2;
        s1.push(root);

        while (s1.size()) {
            TreeNode* node = s1.top();
            s1.pop();
            s2.push(node); 

            if (node->left) s1.push(node->left);
            if (node->right) s1.push(node->right);
        }

        while(s2.size()){
            result.push_back(s2.top()->val);
            s2.pop();
        }

        return result;
    }
};
