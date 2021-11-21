// https://leetcode.com/problems/number-of-ways-to-arrive-at-destination

class Solution {
public:
    int v;
    list<pair<int,int>> *adj;
    void addEdge(int u,int w,int wt){
        adj[u].push_back({w, wt});
        adj[w].push_back({u, wt});
    }
    int Dijsktra(int src){
        long int mod = 1e9+7;
        priority_queue<pair<long int,int>,vector<pair<long int,int>>,greater<pair<long int,int>>>pq;
        vector<long int> dist(v, LONG_MAX);
        vector<bool>visited(v,false);
        pq.push({0, src});
        dist[src] = 0;
        vector<long>ways(v,0);      
        ways[0] = 1;
        while(!pq.empty()){
            int u = pq.top().second;
            if(visited[u]==true)
                continue;
            visited[u]=true;
            pq.pop();
            for(auto x:adj[u]){
                int V = x.first;
                int weight = x.second;
                if(dist[V] > dist[u]+weight){
                    dist[V] = dist[u]+weight;
                    ways[V] = ways[u];
                    pq.push({dist[V],V});
                }
                else if(dist[V]==weight+dist[u]){
                    ways[V] = (ways[V]+ways[u])%mod;
                }
            }
        }
        return ways[v-1];
    }
    int countPaths(int n, vector<vector<int>>& roads) {
        v = n;
        adj = new list<pair<int,int>>[v];
        for(int i=0;i<roads.size();i++){
            addEdge(roads[i][0], roads[i][1], roads[i][2]);
        }
        return Dijsktra(0);
    }
};