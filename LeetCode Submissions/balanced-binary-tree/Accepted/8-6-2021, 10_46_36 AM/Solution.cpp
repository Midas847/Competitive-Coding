// https://leetcode.com/problems/balanced-binary-tree

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
    int height(TreeNode* node){
        if(node==NULL)
            return 0;
        return(max(height(node->left),height(node->right))+1);
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
            return true;
        int ldepth = height(root->left);
        int rdepth = height(root->right);
        if(abs(ldepth-rdepth)<=1&&isBalanced(root->left)&&isBalanced(root->right))
            return true;
        return false;

    }
};