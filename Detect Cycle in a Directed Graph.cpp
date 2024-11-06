//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool dfs(vector<vector<int>>&adj, vector<int>&vis,int i)
    {
        if(vis[i]==1)
        {
            return true;
        }
        if(vis[i]==-1)
        {
            return false;
        }
        vis[i]=1;
        for(auto x: adj[i])
        {
            if(dfs(adj,vis,x))
            {
                return true;
            }
        }
        vis[i]=-1;
        return false;
    }
    vector<int>vis;
    bool isCyclic(int V, vector<vector<int>> adj) {
        // code here
        vis = vector<int>(V,0);
        for(int i=0;i<V;i++)
        {
            if(vis[i]==0)
            {
                if(dfs(adj,vis,i))
                {
                    return true;
                }
            }
        }
        return false;
    }
    
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<vector<int>> adj(V);

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends
