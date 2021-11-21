// https://leetcode.com/problems/sum-root-to-leaf-numbers

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
    void inorder(TreeNode* root,int sum,vector<int>& pathSum){
        if(root == NULL)
            return;
        sum = sum*10+root->val;
        if(root->left == NULL && root->right == NULL)
        {
            pathSum.push_back(sum);
            cout<<sum<<" ";
            return;
        }
        inorder(root->left,sum,pathSum);
        inorder(root->right,sum,pathSum);
    }
    int sumNumbers(TreeNode* root) {
        vector<int> pathSum;
        inorder(root,0,pathSum);
        int total = 0;
        for(int i=0;i<pathSum.size();i++){
            total += pathSum[i];
        }
        return total;
    }
};