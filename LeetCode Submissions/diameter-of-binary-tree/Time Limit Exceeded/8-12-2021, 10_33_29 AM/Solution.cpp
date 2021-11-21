// https://leetcode.com/problems/diameter-of-binary-tree

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
    int height(TreeNode* root, int &ans)
    {
        if (root == NULL)
            return 0;
        ans = max(ans, height(root->left, ans) + height(root->right, ans));
        return 1 + max(height(root->left, ans), height(root->right, ans));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if (root == NULL)
        return 0;
        int ans = INT_MIN;
        height(root, ans);
        return ans;
    }
};