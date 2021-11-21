// https://leetcode.com/problems/find-the-minimum-and-maximum-number-of-nodes-between-critical-points

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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> v;
        vector<int> v1;
        ListNode* temp = head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp = temp->next;
        }
        for(int i=1;i<v.size()-1;i++){
            if(v[i] > v[i-1] && v[i] > v[i+1])
                v1.push_back(i+1);
            if(v[i] < v[i-1] && v[i] < v[i+1])
                v1.push_back(i+1);
        }
        if(v1.size() < 2)
            return {-1,-1};
        vector<int> v2;
        sort(v1.begin(),v1.end());
        int maxd = INT_MIN;
        int mind = INT_MAX;
        for(int i=1;i<v1.size();i++){
            if(v1[i] - v1[i-1] < mind)
                mind = v1[i] - v1[i-1];
        }
        maxd = v1[v1.size()-1] - v1[0];
        v2.push_back(mind);
        v2.push_back(maxd);
        return v2;
    }
};