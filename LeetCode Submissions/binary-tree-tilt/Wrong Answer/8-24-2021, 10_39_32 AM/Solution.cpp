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
    void postorder(TreeNode* root){
        if(root==NULL)
            return;
        if(root->left!=NULL&&root->right!=NULL)
            sum += abs(root->left->val-root->right->val);
        else if(root->left==NULL&&root->right!=NULL)
            sum += abs(root->right->val);
        else if(root->left!=NULL&&root->right==NULL)
            sum += abs(root->left->val);
        findTilt(root->left);
        findTilt(root->right);
    }
    int findTilt(TreeNode* root) {
        postorder(root);
        return sum;
    }
};