// https://leetcode.com/problems/network-delay-time

class Solution {
public:
    int v;
    list<pair<int,int>>* adj;
    void addEdge(int u,int v,int wt){
        adj[u].push_back({v, wt});
    }
    int Dijkstra(int src){
        set<pair<int,int>> setds;
        vector<int> dist(v,INT_MAX);
        setds.insert({0,src});
        dist[src] = 0;
        while(!setds.empty()){
            pair<int,int> tmp = *(setds.begin());
            setds.erase(setds.begin());
            int u = tmp.second;
            //list<pair<int,int>>::iterator i;
            for(auto i = adj[u].begin();i!=adj[u].end();i++){
                int V = (*i).first;
                int weight = (*i).second;
                if(dist[V] > dist[u] + weight){
                    if(dist[V]!=INT_MAX)
                        setds.erase(setds.find({dist[V],V}));
                    dist[V] = dist[u] + weight;
                    setds.insert({dist[V],V});
                }
            }
        }
        int ans = INT_MIN;
        for(int i = 0;i<v;i++){
            if(dist[i] == INT_MAX)
                return -1;
            ans = max(ans,dist[i]);
        }
        return ans;
    }
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        v = n;
        adj=new list<pair<int,int>>[v];
        for(int i=0;i<times.size();i++){
            addEdge(times[i][0]-1,times[i][1]-1,times[i][2]);
        }      
        return Dijkstra(k-1);
    }
};