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
    int final_sum = 0;
    int storesum(TreeNode* root){
        if(root==NULL)
        {
            return 0;
        }
        int leftsum = storesum(root->left);
        int rightsum = storesum(root->right);
        final_sum+=abs(leftsum-rightsum);
        int sum =root->val+leftsum+rightsum;
        return sum;
    }
    int findTilt(TreeNode* root) {
        storesum(root);
        return final_sum;
    }
};