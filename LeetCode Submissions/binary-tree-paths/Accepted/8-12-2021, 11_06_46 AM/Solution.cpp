// https://leetcode.com/problems/binary-tree-paths

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
    vector<string> v;
    void pathLens(TreeNode* root,int pathLen[],int leng){
        if(root==NULL)
            return;
        pathLen[leng] = root->val;
        leng++;
        if(root->left==NULL&&root->right==NULL){
            printArray(pathLen,leng);
        }
        else{
            pathLens(root->left,pathLen,leng);
            pathLens(root->right,pathLen,leng);
        }
    }
    void printArray(int pathLen[], int leng){
        string ans="";
        for(int i=0;i<leng;i++){
            if(i!=leng-1)
                ans+=to_string(pathLen[i])+"->";
            else
                ans+=to_string(pathLen[i]);
        }
        v.push_back(ans);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        int pathLen[1000];
        pathLens(root,pathLen,0);
        return v;
    }
};