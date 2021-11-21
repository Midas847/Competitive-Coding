// https://leetcode.com/problems/find-the-town-judge

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1 && trust.size()==0) return 1;
        vector<int> graph[n+1];
        for(int i=0;i<trust.size();i++){
            graph[trust[i][0]].push_back(trust[i][1]);
        }
        vector<int> indegree(n+1,0);
        for(int i=1;i<=n;i++){
            for(int j:graph[i]){
                indegree[j]++;
                if(indegree[j]==n-1 && graph[j].size()==0) return j;
            }
        }
        return -1;
    }
};