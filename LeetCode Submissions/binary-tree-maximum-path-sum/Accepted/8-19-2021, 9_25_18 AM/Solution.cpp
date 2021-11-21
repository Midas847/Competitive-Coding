// https://leetcode.com/problems/binary-tree-maximum-path-sum

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
    int maxPathSumUtil(TreeNode* root, int &res){
        if(root==NULL)
            return 0;
        int l = maxPathSumUtil(root->left,res);
        int r = maxPathSumUtil(root->right,res);
        int max_here = max(max(l,r)+root->val,root->val);
        int max_sum = max(max_here,l+r+root->val);
        res = max(res,max_sum);
        return max_here;
    }
    int maxPathSum(TreeNode* root) {
        int res = INT_MIN;
        maxPathSumUtil(root,res);
        return res;
    }
};