// https://leetcode.com/problems/add-two-numbers

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
    ListNode* newNode(int data)
    {
        ListNode* new_node = new ListNode();
        new_node->val = data;
        new_node->next = NULL;
        return new_node;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* current = l1;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        while(current!=NULL){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        l1 = prev;
        ListNode* current1 = l2;
        ListNode* prev1 = NULL;
        ListNode* next1 = NULL;
        while(current1!=NULL){
            next1 = current1->next;
            current1->next = prev1;
            prev1 = current1;
            current1 = next1;
        }
        l2 = prev1;
        int carry = 0,sum;
        ListNode* res = NULL;
        ListNode *temp, *prev2 = NULL;
        while(l1!=NULL || l2!=NULL){
            sum=carry+(l1 ? l1->val : 0) + (l2 ? l2->val:0);
            carry = (sum>=10 ? 1:0);
            sum = sum%10;
            temp = newNode(sum);
            if(res==NULL)
                res = temp;
            else
                prev2->next = temp;
            prev2 = temp;
            if (l1)
                l1 = l1->next;
            if (l2)
                l2 = l2->next;
            }
            if (carry > 0)
            temp->next = newNode(carry);
            return res;
    }
};