// https://leetcode.com/problems/find-mode-in-binary-search-tree

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
    vector<int> findMode(TreeNode* root) {
        if(root==NULL){
            vector<int> s;
            s.push_back(0);
            return s;
        }
        inorder(root);
        map<int,int> m;
        for(int i=0;i<v.size();i++){
            m[v[i]]++;
        }
        int maxval = 0;
        for(auto x:m){
            maxval = max(maxval,x.second);
        }
        vector<int> g;
        for(auto x:m){
            if(x.second==maxval){
                g.push_back(x.first);
            }
        }
        return g;
    }
};