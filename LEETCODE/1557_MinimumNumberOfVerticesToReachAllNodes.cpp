#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> visited;
    void dfs(int node, vector<vector<int>>& edges) {
        if (visited[node] == 0) {
            visited[node] = 1;
            for (auto i : edges[node]) {
                dfs(i, edges);
            }
        }
    }
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        visited = vector<int>(n, 0);
        set<int> vertices;
        vector<vector<int>> adj(n);
        
        for(auto i : edges){
            adj[i[0]].push_back(i[1]);
        }

        vector<int> inDegree(n, 0);
        for(auto i : edges){
            inDegree[i[1]]++;
        }

        vector<int> res;
        for(int i = 0; i < n;i ++){
            if(inDegree[i]==0){
                res.push_back(i);
            }
        }

        return res;
    }
};