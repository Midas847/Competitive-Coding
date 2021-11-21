// https://leetcode.com/problems/minimum-absolute-difference-in-bst

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
    vector<int> v;
    void inorder(TreeNode* root){
        if(root!=NULL){
            inorder(root->left);
            v.push_back(root->val);
            inorder(root->right);
        }
    }
    int getMinimumDifference(TreeNode* root) {
        if(root==NULL)
            return 0;
        inorder(root);
        int m = v.size();
        int minval = INT_MAX;
        for(int i=0;i<m-1;i++){
            for(int j=i+1;j<m;j++){
                minval = min(minval,abs(v[i]-v[j]));
            }
        }
        return minval;
    }
};