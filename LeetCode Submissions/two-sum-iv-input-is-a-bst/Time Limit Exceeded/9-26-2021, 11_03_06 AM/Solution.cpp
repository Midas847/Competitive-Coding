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
            if(root!=NULL)
                v.push_back(root->val);
            inorder(root->right);
        }
    }
    bool findTarget(TreeNode* root, int k) {
        if(root==NULL)
            return false;
        inorder(root);
        for(int i=0;i<v.size()-1;i++){
            for(int j=i+1;j<v.size();j++){
                if(v[i]+v[j]==k){
                    return true;
                }
                cout<<v[i]<<" "<<v[j]<<"\n";
            }
        }
        /*for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";*/
        return false;
        
    }
};