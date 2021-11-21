// https://leetcode.com/problems/path-with-maximum-probability

class Solution {
public:
    int v;
    list<pair<int,double>>* adj;
    void addEdge(int u,int w,double wt){
        adj[u].push_back({w, wt});
        adj[w].push_back({u, wt});
    }
    double Dijsktra(int start,int end){
        vector<double>dist(v+1,-1.0);
        vector<bool>visited(v,false);
        priority_queue<pair<double,int>> pq;
        pq.push({1.0, start});
        dist[start] = 1.0;
        while(!pq.empty()){
            int u = pq.top().second;
            if(u == end)
                return dist[u];
            pq.pop();
            if(visited[u]==true)
                continue;
            visited[u] = true;
            for(auto i=adj[u].begin();i!=adj[u].end();i++){
                int v = (*i).first;
                double weight = (*i).second;
                if(dist[u]*weight > dist[v]){
                    dist[v] = dist[u]*weight;
                    pq.push({dist[v], v});
                }
            }
        }
        return 0.0;
    }
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        v = n;
        adj = new list<pair<int,double>>[v];
        for(int i=0;i<edges.size();i++){
            addEdge(edges[i][0],edges[i][1],succProb[i]);
        }
        return Dijsktra(start,end);
    }
};