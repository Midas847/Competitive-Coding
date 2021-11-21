// https://leetcode.com/problems/minimum-number-of-vertices-to-reach-all-nodes

class Solution {
public:
    list<int>* adj;
    void addEdge(int u,int v){
        adj[u].push_back(v);
    }
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        adj = new list<int>[n];
        for(int i=0;i<edges.size();i++){
            addEdge(edges[i][0],edges[i][1]);
        }
        vector<int> v;
        //vector<int> indegree(n+1,0);
        map<int,int> indegree;
        for(int i=0;i<n;i++){
            for(auto j:adj[i]){
                indegree[j]++;
                //cout<<j<<" ";
            }
            //cout<<"\n";
        }
        for(int i=0;i<n;i++){
            if(indegree[i] == 0)
                v.push_back(i);
        }
        return v;
    }
};