// https://leetcode.com/problems/univalued-binary-tree

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
    void inorder(TreeNode* root)
    {
        if(root!=NULL){
            inorder(root->left);
            v.push_back(root->val);
            inorder(root->right);
        }
        
    }    bool isUnivalTree(TreeNode* root) {
        if(root==NULL)
            return true;
        inorder(root);
        int m= v[0];
        for(int i=1;i<v.size();i++){
            if(v[i]!=m){
                return false;
            }
        }
        return true;
    }
};