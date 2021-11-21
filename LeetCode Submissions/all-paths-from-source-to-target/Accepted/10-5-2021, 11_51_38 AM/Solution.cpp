// https://leetcode.com/problems/all-paths-from-source-to-target

class Solution {
public:
    void DFS(vector<vector<int>>& graph, vector<vector<int>> &result, vector<int> path, int src,int dest){
        path.push_back(src);
        if(src == dest){
            result.push_back(path);
            return;
        }
        for(auto node:graph[src])
            DFS(graph,result,path,node,dest);
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> paths;
        vector<int> path;
        int n = graph.size();
        if(n==0)
            return paths;
        DFS(graph, paths, path, 0, n-1);
        return paths;
    }
};