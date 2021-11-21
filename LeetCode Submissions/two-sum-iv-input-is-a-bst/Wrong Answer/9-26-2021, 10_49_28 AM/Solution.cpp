// https://leetcode.com/problems/two-sum-iv-input-is-a-bst

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
    bool findTarget(TreeNode* root, int k) {
        if(root==NULL)
            return false;
        inorder(root);
        std::vector<int>::iterator it;
        for(auto x:v){
            //cout<<x<<" ";
            if(k-x >= 0 && find(v.begin(),v.end(),k-x)!=v.end()){
                return true;
            }
        }
        return false;
        
    }
};