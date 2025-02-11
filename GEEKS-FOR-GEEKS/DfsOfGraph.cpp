//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> res;
    
    void dfs(int u, vector<vector<int>>& adj, vector<int> &vis) {
        vis[u] = 1;
        res.push_back(u);
        for(auto v : adj[u]) {
            if(!vis[v]) {
                
                dfs(v, adj, vis);
            }

        }
    }
    
    vector<int> dfsOfGraph(vector<vector<int>>& adj) {
        // Code here
        vector<int> vis(adj.size() + 5, 0);
        dfs(0, adj, vis);
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<vector<int>> adj(
            V); // Use vector of vectors instead of array of vectors.

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        Solution obj;
        vector<int> ans = obj.dfsOfGraph(adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends