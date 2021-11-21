// https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal

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
    TreeNode* newNode(int data){
        TreeNode* temp = new TreeNode();
        temp->val = data;
        temp->left = temp->right = NULL;
        return temp;
    }
    TreeNode* bstUtil(vector<int> preorder,int* preIndex,int key,int max,int min,int size){
        if(*preIndex >= size)
            return NULL;
        TreeNode* root = NULL;
        if(key > min && key < max){
            root = newNode(key);
            *preIndex = *preIndex+1;
            if(*preIndex < size){
                root->left = bstUtil(preorder,preIndex,preorder[*preIndex],key,min,size);
            }
            if(*preIndex < size){
                root->right = bstUtil(preorder,preIndex,preorder[*preIndex],max,key,size);
            }
        }
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int size = preorder.size();
        int preIndex = 0;
        return bstUtil(preorder,&preIndex,preorder[0],INT_MAX,INT_MIN,size);
    }
};