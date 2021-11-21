// https://leetcode.com/problems/reverse-nodes-in-even-length-groups

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
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        vector<ListNode*> v;
        while(head!=NULL){
            v.push_back(head);
            head = head->next;
        }
        int idx = 0;
        int cnt = 1;
        while(idx < v.size()){
            int offset = min((int)v.size(),idx + cnt);
            if((offset-idx)%2==0)
                reverse(v.begin() + idx,v.begin() + offset);
            idx += cnt;
            cnt++;
        }
        for(int i=1;i<v.size();i++){
            v[i-1]->next = v[i];
        }
        v.back()->next = NULL;
        return v[0];
    }
};