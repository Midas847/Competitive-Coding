// https://leetcode.com/problems/triangle

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        if(n == 1)
            return triangle[0][0];
        int pathSum = 0;
        int t = 0;
        map<int,int> pos;
        for(int i=1;i<triangle.size();i++){
            //int minele = INT_MAX;
            for(int j=0;j<triangle[i].size();j++){
                   if(triangle[i][t] < triangle[i][t+1]){
                       cout<<triangle[i][t]<<"\n";
                       t = t;
                       pathSum += triangle[i][t];
                       break;
                   }
                    else{
                        cout<<triangle[i][t+1]<<"\n";
                        t = t+1;
                        pathSum += triangle[i][t+1];
                        break;
                    }
            }
        }
        return pathSum;
    }
};