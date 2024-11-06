//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<vector<int>>adj;
	bool isPossible(int N,int P, vector<pair<int, int> >& pre) {
	    // Code here
	    adj = vector<vector<int>>(N);
	    for(auto it: pre)
	    {
	       adj[it.second].push_back(it.first);
	    }
	    stack<int>s;
	    //int n=adj.size();
	    vector<int>vis(N,0);
	    for(int i=0;i<N;i++)
	    {
	        if(!vis[i])
	        {
	            if(dfs(adj,i,s,vis))
	            {
	                return false;
	            }
	        }
	    }
	    
	    return true;
	}
	bool dfs(vector<vector<int>>&adj,int i,stack<int>&s,vector<int>&vis)
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
	    for(auto it: adj[i])
	    {
	        
	            if(dfs(adj,it,s,vis))
	            {
	                return true;
	            }
	        
	    }
	    vis[i]=-1;
	    return false;
	   // s.push(i);
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
    	int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N,P, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends
