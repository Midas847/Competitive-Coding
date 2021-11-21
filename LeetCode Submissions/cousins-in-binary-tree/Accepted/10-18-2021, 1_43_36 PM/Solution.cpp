// https://leetcode.com/problems/cousins-in-binary-tree

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
    bool isCousins(TreeNode* root, int x, int y) {
        if(root==NULL)
            return true;
        queue<TreeNode*> q;
        q.push(root);
        TreeNode* prev = root;
        while(!q.empty()){
            int count = q.size();
            int flag=0;
            while(count--){
                TreeNode* temp = q.front();
                //cout<<temp->val<<" ";
                if(temp->left!=NULL&&temp->right!=NULL){
                    if(temp->left->val==x&&temp->right->val==y)
                        return false;
                    if(temp->left->val==y&&temp->right->val==x)
                        return false;
                }
                if(temp->val==x||temp->val==y)
                    flag++;
                if(flag==2)
                    return true;
                q.pop();
                if(temp->left){
                    prev = temp;
                    q.push(temp->left);
                }
                if(temp->right){
                    prev = temp;
                    q.push(temp->right);
                }
            }
            cout<<"\n";
        }
        return false;
    }
};