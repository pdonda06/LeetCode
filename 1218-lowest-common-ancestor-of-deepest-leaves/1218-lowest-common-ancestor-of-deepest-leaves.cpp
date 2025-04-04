class Solution {
public:
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        // Helper function for postorder traversal
        return postorder(root).first;
    }

private:
    // This function returns a pair where:
    // - first is the LCA of the deepest leaves
    // - second is the depth of the deepest leaf in the current subtree
    pair<TreeNode*, int> postorder(TreeNode* node) {
        if (!node) {
            return {nullptr, 0};  // No node, depth 0
        }
        
        // Recursively traverse the left and right subtrees
        auto left = postorder(node->left);
        auto right = postorder(node->right);
        
        // If the depths are the same, the current node is the LCA of deepest leaves
        if (left.second == right.second) {
            return {node, left.second + 1};
        }
        
        // Otherwise, return the deeper subtree's result
        if (left.second > right.second) {
            return {left.first, left.second + 1};
        } else {
            return {right.first, right.second + 1};
        }
    }
};
