// https://leetcode.com/problems/watering-plants

class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int t = 0;
        int c = capacity;
        for(int i=0;i<plants.size();i++){
            if(plants[i]!=-1 && plants[i]<=c){
                c -= plants[i];
                plants[i] = -1;
                t++;
            }
            else if(plants[i]!=-1 && plants[i] > c){
                t += i;
                c = capacity;
                i = -1;
            }
            else if(plants[i]==-1){
                t++;
            }
        }
        return t;
    }
};