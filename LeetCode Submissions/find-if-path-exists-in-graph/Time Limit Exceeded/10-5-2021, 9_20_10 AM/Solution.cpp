// https://leetcode.com/problems/find-if-path-exists-in-graph

class Solution {
public:
    list<int>* adj;
    bool x = false;
    bool y = false;
    void AddEdge(int u,int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    void DFS(int s,vector<bool> visited, int start,int end){
        visited[s] = true;
        if(s == start)
            x = true;
        for(auto i = adj[s].begin();i!=adj[s].end();i++){
            if(!visited[*i]){
                if(*i == end){
                    y = true;
                }
                if(x && y)
                    return;
                DFS(*i,visited,start,end);
            }
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        if(edges.empty()){
            if(start == 0 && end == 0)
                return true;
        }
        adj = new list<int>[n];
        vector<bool> visited(n,false);
        for(int i=0;i<edges.size();i++){
            AddEdge(edges[i][0],edges[i][1]);
        }
        for(int i=0;i<n;i++){
            DFS(i,visited,start,end);
            if(x && y)
                return true;
            x = false;
            y = false;
        }
        return false;
    }
};