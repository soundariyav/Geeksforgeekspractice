class Solution {
  public:
    int possible_paths(vector<vector<int>> &edges, int n, int start, int destination) {
        // Code here
        vector<vector<int>>adj(n);
        for(int i=0;i<edges.size();i++)
        {
            int u = edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);
            
        }
        vector<int>memo(n+1,-1);
        return dfs(adj,start,destination,memo);
    }
    int dfs(vector<vector<int>>&adj,int s ,int d,vector<int>memo)
    {
        if(s==d)return 1;
        if(memo[s]!=-1)return memo[s];
        //check for the neighbours
        
        int count=0;
        for(auto nei : adj[s])
        {
            count+=dfs(adj,nei,d,memo);
        }
        memo[s]=count;
        return count;
    }
};
