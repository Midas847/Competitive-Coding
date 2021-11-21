// https://leetcode.com/problems/count-good-nodes-in-binary-tree

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
    int mx;
    int c = 0;
    int goodNodes(TreeNode* root) {
        if(root==NULL)
            return 0;
        if(root->val > mx){
            mx = max(root->val,mx);
            return goodNodes(root->left) + goodNodes(root->right) + 1;
        }
        return goodNodes(root->left) + goodNodes(root->right);
    }
};