// https://leetcode.com/problems/distribute-candies-to-people

class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        int i = 0;
        int loops = 0;
        vector<int> output(num_people);
        while(candies > 0){
            if(i==num_people){
                loops++;
                i = 0;
            }
            int curr_candy = (loops*num_people)+(i+1);
            if(candies - curr_candy < 0){
                output[i]+= candies;
            }
            else{
                output[i]+= curr_candy;
            }
            i++;
            candies-=curr_candy;
        }
        return output;
    }
};