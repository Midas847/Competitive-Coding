// https://leetcode.com/problems/subtree-of-another-tree

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
    bool sub(TreeNode* root, TreeNode* subRoot){
        if(!root&&!subRoot)
            return true;
        if ((!root || !subRoot) || (root->val!=subRoot->val))
            return false;
        return sub(root->left,subRoot->left)&&sub(root->right,subRoot->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root)
            return false;
        if(root->val==subRoot->val){
            if(sub(root,subRoot))
                return true;
        }
        return isSubtree(root->left , subRoot) || isSubtree(root->right , subRoot);
    }
};