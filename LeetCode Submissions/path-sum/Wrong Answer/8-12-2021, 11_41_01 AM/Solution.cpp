// https://leetcode.com/problems/path-sum

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
    vector<int> sums;
    bool hasPathSum(TreeNode* root, int sum) {
        if(root==NULL)
            return (sum==0);
        else{
            int remainingSum = sum - root->val;
            if((!root->left&&!root->right)||(root->left&&root->right))
                return(hasPathSum(root->left,remainingSum )||hasPathSum(root->right,remainingSum ));
            else if(root->left)
                return(hasPathSum(root->left,remainingSum ));
            else
                return hasPathSum(root->right,remainingSum );
        }
    }
};