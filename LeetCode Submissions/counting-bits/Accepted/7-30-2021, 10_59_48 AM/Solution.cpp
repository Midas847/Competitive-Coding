// https://leetcode.com/problems/counting-bits

class Solution {
public:
    int count(int number){
        int count = 0;
        while(number){
            number = number &(number-1);
            count++;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> no;
        for(int i=0;i<=n;i++)
            no.push_back(count(i));
        return no;
    }
};