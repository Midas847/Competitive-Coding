// https://leetcode.com/problems/linked-list-cycle

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    unordered_map<ListNode*,int> m;
    bool hasCycle(ListNode *head) {
        if(head==NULL) 
            return false;
        while(head!=NULL){
            if(m.find(head)!=m.end())
               return true; 
            m[head] = head->val;
            head = head->next;
        }
        return false;
    }
};