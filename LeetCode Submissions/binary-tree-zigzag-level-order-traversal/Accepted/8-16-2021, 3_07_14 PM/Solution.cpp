// https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal

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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> g;
        if(root==NULL)
            return g;
        stack<TreeNode*> currentLevel;
        stack<TreeNode*> nextLevel;
        bool leftToRight = true;
        currentLevel.push(root);
        vector<int> x;
        while(!currentLevel.empty()){
            TreeNode* temp = currentLevel.top();
            //cout<<temp->val<<" ";
            x.push_back(temp->val);
            currentLevel.pop();
            if(temp){
                //x.push_back(temp->val);
                if(leftToRight){
                    if(temp->left)
                        nextLevel.push(temp->left);
                    if(temp->right)
                        nextLevel.push(temp->right);
                }
            else{
                if(temp->right)
                    nextLevel.push(temp->right);
                if(temp->left)
                    nextLevel.push(temp->left);
            }
        }
            if(currentLevel.empty()){
                //cout<<"\n";
                g.push_back(x);
                x.clear();
                leftToRight = !leftToRight;
                swap(currentLevel,nextLevel);
            }
        }
        return g;
    }
};