// https://leetcode.com/problems/binary-tree-tilt

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
    int postorder(TreeNode* root){
        if(root==NULL)
            return 0;
        sum+=abs(postorder(root->left)-postorder(root->right));
        return root->val+postorder(root->left)+postorder(root->right);
    }
    int findTilt(TreeNode* root) {
        postorder(root);
        return sum;
    }
};