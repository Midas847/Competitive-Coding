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
    void preOrder(TreeNode* root,int sum){
        if(root==NULL)
            return;
        else{
            sum+=root->val;
            //cout<<root->val<<endl;
            //cout<<sum<<endl;
            if(root->left==NULL&&root->right==NULL){
                sums.push_back(sum);
                return;
            }
            preOrder(root->left,sum);
            preOrder(root->right,sum);
        }
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        preOrder(root,0);
        for(int i=0;i<sums.size();i++){
           if(sums[i]==targetSum)
               return true;
        }
        return false;
    }
};