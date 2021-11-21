// https://leetcode.com/problems/merge-two-sorted-lists

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
class Solution {
public:
    void insert(ListNode** root, int item)
    {
        ListNode* temp = new ListNode;
        ListNode* ptr;
        temp->val = item;
        temp->next = NULL;

        if (*root == NULL)
            *root = temp;
        else {
            ptr = *root;
            while (ptr->next != NULL)
                ptr = ptr->next;
            ptr->next = temp;
        }
    }
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* temp = l1;
        ListNode* temp1 = l2;
        vector<int>v;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp = temp->next;
        }
        while(temp1!=NULL){
            v.push_back(temp1->val);
            temp1 = temp1->next;
        }
        sort(v.begin(),v.end());
        ListNode* temp3 = NULL;
        for(int i=0;i<v.size();i++){
            insert(&temp3, v[i]);
        }
        return temp3;
    }
};