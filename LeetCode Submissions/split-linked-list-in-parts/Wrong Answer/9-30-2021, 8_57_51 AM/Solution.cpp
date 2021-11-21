// https://leetcode.com/problems/split-linked-list-in-parts

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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> v;
        ListNode* temp = head;
        int c = 0;
        while(temp!=NULL){
            c++;
            temp = temp->next;
        }
        int nmber = c/k;
        int extra = c%k;
        cout<<nmber<<" "<<extra<<"\n";
        temp = head;
        while(temp){
            v.push_back(temp);
            int i = 1;
            while(i < nmber){
                temp = temp->next;
                i++;
            }
            while(extra>0 && c > k){
                temp = temp->next;
                extra--;
            }
            ListNode* x = temp->next;
            temp->next = NULL;
            temp = x;
        }
        while(c < k){
            v.push_back(NULL);
            c++;
        }
        return v;
    }
};