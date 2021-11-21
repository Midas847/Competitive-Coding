// https://leetcode.com/problems/remove-duplicates-from-sorted-list

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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        vector<int> v;
        while(head!=NULL){
            int data = head->val;
            v.push_back(data);
            head = head->next;
        }
        vector<int>::iterator ip;
        ip = std::unique(v.begin(), v.end());
        v.resize(std::distance(v.begin(), ip));
        ListNode* temp1 = NULL;
        for(auto x:v){
            insert(&temp1,x);
        }
        return temp1;
    }
};