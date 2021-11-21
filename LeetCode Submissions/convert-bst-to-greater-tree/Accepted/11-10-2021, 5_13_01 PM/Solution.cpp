// https://leetcode.com/problems/convert-bst-to-greater-tree

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
    int sum = 0;
    void calculate(TreeNode* root){
        if(root == NULL)
            return;
        calculate(root->right);
        sum += root->val;
        root->val = sum;
        calculate(root->left);
    }
    TreeNode* convertBST(TreeNode* root) {
        calculate(root);
        return root;
    }
};