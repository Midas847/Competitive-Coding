// https://leetcode.com/problems/binary-tree-inorder-traversal

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
    vector<int> v1;
   void printInorder(TreeNode* node) {
		if (node == NULL)
			return;
		printInorder(node->left); 
		v1.push_back(node->val);
		printInorder(node->right);
	}
	  vector<int> inorderTraversal(TreeNode* root) {
			printInorder(root);
			return v1;
		}
    
};