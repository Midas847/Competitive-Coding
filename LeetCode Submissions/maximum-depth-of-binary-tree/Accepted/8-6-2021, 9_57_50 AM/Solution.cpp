// https://leetcode.com/problems/maximum-depth-of-binary-tree

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
    int maxdepth = 0;
    int maxDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        else{
            int ldepth = maxDepth(root->left);
            int rdepth = maxDepth(root->right);
            cout<<ldepth<<" "<<rdepth<<endl;
            return(max(ldepth,rdepth)+1);
        }
    }
};