// https://leetcode.com/problems/kth-smallest-element-in-a-bst

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
    TreeNode* kthSmallestUtil(TreeNode* root,int k,int count){
        if(root==NULL)
            return NULL;
        TreeNode* left = kthSmallestUtil(root->left,k,count);
        if(left)
            return left;
        if(++count==k)
            return root;
        return kthSmallestUtil(root->right,k,count);
    }
    int kthSmallest(TreeNode* root, int k) {
        int count = 0;
        return kthSmallestUtil(root,k,count)->val;
    }
};