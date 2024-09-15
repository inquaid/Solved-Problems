#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> graph;
vector<int> vertices;
vector<bool> visited;

void dfs(int id)
{
    if (visited[id] == false)
    {
        // cout<<id<<" ";
        visited[id] = true;
    }
    else
        return;
    for (auto i : graph[id])
    {
        dfs(i);
    }
}

int main()
{
    int v, e;
    cin >> v >> e;
    graph.resize(v + 1);
    visited.resize(v + 1, false);

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
        // vertices.push_back(a);
        // vertices.push_back(b);
    }
    // int n = vertices.size();

    // dfs(1);
    int cnt = 0;
    for (int i = 1; i <= v; i++)
    {
        if (visited[i] == false)
        {
            dfs(i);
            cnt++;
        }
    }
    cout << cnt;
}