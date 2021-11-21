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
    void goodNodesUtil(TreeNode* root, int maximum){
        if(root==NULL)
            return;
        if(root->val >= maximum)
            c++;
        goodNodesUtil(root->left,max(maximum,root->val));
        goodNodesUtil(root->right,max(maximum,root->val));
    }
    int goodNodes(TreeNode* root) {
        if(root==NULL)
            return 0;
        if(!root->left&&!root->right)
            return 1;
        int maximum = INT_MIN;
        goodNodesUtil(root, maximum);
        return c;
    }
};