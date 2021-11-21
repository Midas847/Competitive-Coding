// https://leetcode.com/problems/validate-binary-search-tree

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
    bool isValidUtil(TreeNode* root,int64_t min,int64_t max){
        if(root==NULL)
            return 1;
        return(root->val > min && root->val < max && isValidUtil(root->left,min,root->val)&& isValidUtil(root->right,root->val,max));
    }
    bool isValidBST(TreeNode* root) {
        return isValidUtil(root, LLONG_MIN, LLONG_MAX);
    }
};