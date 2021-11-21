// https://leetcode.com/problems/course-schedule

class Solution {
public:
    int v;
    list<int>*adj;
    void addEdge(int u,int v)
    {
        adj[u].push_back(v);
    }
    bool isCyclic(int s,vector<bool>&visited,vector<bool>&stk )//Detecting Cycles prent in the Directed Graph
    {
        if(visited[s]==false)
        {
            visited[s]=true;
            stk[s]=true;
            for(auto i=adj[s].begin();i!=adj[s].end();i++)
            {
                if(visited[*i]==false&&isCyclic(*i,visited,stk)==true)
                    return true;
                else if (stk[*i]==true)
                return true;
            }
         }
        stk[s]=false;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        v=numCourses;
        adj=new list<int>[v];
        for(int i=0;i<prerequisites.size();i++)
        {
            addEdge(prerequisites[i][0],prerequisites[i][1]);
        }
        vector<bool>visited(v,false);
        vector<bool>stk(v,false);
    
        for(int i=0;i<v;i++)
        {
            if(isCyclic(i,visited,stk))            
              return false;            
         }
      
        return true;
    }
};