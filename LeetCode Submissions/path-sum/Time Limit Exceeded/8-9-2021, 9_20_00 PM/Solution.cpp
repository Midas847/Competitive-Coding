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
    bool hasPathSum(TreeNode* root, int targetSum) {
        stack<TreeNode*> stk;
        TreeNode *r1=root;
        int sum1=0;int c=0;
        while(1)
        {
            
            while(root)
            {
                sum1=sum1+root->val;
                if(root->left==NULL&&root->right==NULL){
                    cout<<sum1<<endl;
                    if(sum1==targetSum)
                        return true;
                }
                stk.push(root);
                root=root->left;
               
            }

            if(stk.empty())
                return false;
            sum1=sum1-stk.top()->val;
            stk.pop();
            root=stk.top();  
            root=root->right;
           
        
    }
    }
};