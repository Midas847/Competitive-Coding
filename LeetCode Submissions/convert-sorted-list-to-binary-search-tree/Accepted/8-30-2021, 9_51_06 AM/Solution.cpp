// https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
        TreeNode* newnode = new TreeNode();
        newnode->val  = data;
        newnode->left=newnode->right=NULL;
        return newnode;
    }
    int countNodes(ListNode* head){
        int count = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            count++;
            temp = temp->next;
        }
        return count;
    }
    TreeNode* sortedListToBSTRecur(ListNode** head_ref,int n){
        if(n<=0)
            return NULL;
        TreeNode* left = sortedListToBSTRecur(head_ref,n/2);
        TreeNode* root = newNode((*head_ref)->val);
        root->left = left;
        (*head_ref) = (*head_ref)->next;
        root->right = sortedListToBSTRecur(head_ref,n-n/2-1);
        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        int n = countNodes(head);
        return sortedListToBSTRecur(&head,n);
    }
};