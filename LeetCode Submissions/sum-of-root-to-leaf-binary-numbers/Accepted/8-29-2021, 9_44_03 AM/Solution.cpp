// https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers

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
    int sum = 0;
    
    void preorder(TreeNode* r, int currNumber){
        if(r!=NULL){
        currNumber = (currNumber << 1) | r->val;
            cout<<currNumber<<endl;
        if(r->left == NULL && r->right == NULL)
            sum +=currNumber;
        preorder(r->left, currNumber);
        preorder(r->right, currNumber);
        }
    }
    
    int sumRootToLeaf(TreeNode* root) {
        preorder(root, 0);
        return sum;
    }
};