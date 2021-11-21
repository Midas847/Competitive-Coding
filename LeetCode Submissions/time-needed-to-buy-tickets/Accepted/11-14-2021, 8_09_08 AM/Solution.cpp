// https://leetcode.com/problems/time-needed-to-buy-tickets

class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int t = tickets[k];
        int c = 0;
        while(t!=0){
            t--;
            for(int i=0;i<tickets.size();i++){
                if(tickets[i]!=0){
                    tickets[i]--;
                    c++;
                }
                if(tickets[k]==0){
                    break;
                }
            }
        }
        return c;
    }
};