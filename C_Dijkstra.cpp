#include<bits/stdc++.h>
using namespace std;

const int inf = 1e9;
const int N = 1e6;
vector<vector<pair<int, int>>> graph(N + 1);
set<pair<int, int>> edge_set;

int main(){
    int vertex, edges;
    cin >> vertex >> edges;

    if(edges == 0){
        cout << -1;
        return 0;
    }

    int check = 0;

    for (int i = 0; i < edges; i++){
        int a, b, wt;
        cin >> a >> b >> wt;

        if(a == b){
            continue;
        }
        
        if(a == vertex or b == vertex){
            check = 1;
        }

        if(edge_set.count({min(a, b), max(a, b)})){
            continue;
        }

        edge_set.insert({min(a, b), max(a, b)});

        graph[a].push_back({b, wt});
        graph[b].push_back({a, wt});
    }

    if(check == 0 ){
        cout<< -1;
        return 0;
    }

    vector<int> weight(vertex + 1, inf);
    vector<bool> visited(vertex + 1, false);
    vector<int> parent(vertex + 1, -1);

    priority_queue<pair<int, int>, vector<pair<int, int>> , greater<pair<int, int>>> pq;

    int start = 1;
    weight[start] = 0;
    pq.push({0, start});

    while (pq.empty() == false){   
        int u = pq.top().second;
        pq.pop();

        if(visited[u]){
            continue;
        }
        visited[u] = true;

        for(auto i : graph[u]){
            int v = i.first;
            int w = i.second;

            int temp = weight[u] + w;

            if(visited[v] == false and temp < weight[v]){
                weight[v] = temp;
                parent[v] = u;
                pq.push({weight[v], v});
            }
        }        
    }
    
    int end = vertex;

    if(parent[end] == -1){
        cout<<-1;
        return 0;
    }

    vector<int> path;
    for(int v = end; v != start; v = parent[v]){
        path.push_back(v);
    }
    path.push_back(start);

    reverse(path.begin(), path.end());
    
    for(auto i : path) cout << i << " ";
    
}