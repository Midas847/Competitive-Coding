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
        if(v1.size() == 0)
            return {-1,-1};
        vector<int> v2;
        sort(v1.begin(),v1.end());
        int maxd = INT_MIN;
        int mind = INT_MAX;
        for(int i=0;i<v1.size();i++){
            for(int j=0;j<v1.size();j++){
                if(i != j && v1[j] - v1[i] > maxd)
                    maxd = v1[j] - v1[i];
                if(i != j && v1[j] - v1[i] < mind && v1[j]-v1[i] >= 0)
                    mind = v1[j] - v1[i];
            }
        }
        v2.push_back(mind);
        v2.push_back(maxd);
        if(v2[0] == INT_MAX && v2[1] == INT_MIN)
            return {-1,-1};
        return v2;
    }
};