#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 150;
vector<int> graph[N];
bool visited[N], Star;

int main() {
    int n, m;
    cin >> n >> m;

    for (int inputNodes = 0; inputNodes < m; inputNodes++) {
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    int oneDegree = 0, centerNode = 0, twoDegree = 0, moreThanTwo = 0;
    for (int i = 1; i <= n; i++) {
        int degree = graph[i].size();
        if (degree == 1) {
            oneDegree++;
        } else if (degree == 2) {
            twoDegree++;
        } else if (degree == n - 1) {
            centerNode++;
        } else if (degree > 2) {
            moreThanTwo++;
        }
    }
    if (centerNode == 1 and oneDegree == n - 1) {
        cout << "star topology\n";
    } else if (moreThanTwo == 0 and oneDegree == 2 and twoDegree == n - 2) {
        cout << "bus topology\n";
    } else if (moreThanTwo == 0 and twoDegree == n) {
        cout << "ring topology\n";
    } else
        cout << "unknown topology\n";
}