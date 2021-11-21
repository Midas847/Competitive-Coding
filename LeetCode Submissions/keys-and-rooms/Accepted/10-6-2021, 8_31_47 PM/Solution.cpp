// https://leetcode.com/problems/keys-and-rooms

class Solution {
public:
    list<int>* adj;
    vector<int> v;
    void addEdge(int u,int v){
        adj[u].push_back(v);
    }
    void DFS(int src,vector<bool> &visited){
        visited[src] = true;
        v.push_back(src);
        list<int>::iterator i;
        for(i = adj[src].begin();i!=adj[src].end();i++){
            if(!visited[*i])
                DFS(*i, visited);
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        adj = new list<int>[n];
        for(int i=0;i<rooms.size();i++){
            for(int j=0;j<rooms[i].size();j++){
                addEdge(i, rooms[i][j]);
            }
        }
        vector<bool> visited(n);
        DFS(0,visited);
        for(int i=0;i<rooms.size();i++){
            if(!visited[i])
                return false;
        }
        return true;
    }
};