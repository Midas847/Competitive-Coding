// https://leetcode.com/problems/sum-of-left-leaves

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
    bool isLeaf(TreeNode* node){
        if(node==NULL)
            return false;
        if(node->right==NULL&&node->left==NULL)
            return true;
        else
            return false;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        if(root!=NULL){
            if(isLeaf(root->left))
                sum+=root->left->val;
            else
                sum+=sumOfLeftLeaves(root->left);
            sum+=sumOfLeftLeaves(root->right);
        }
        return sum;
    }
};