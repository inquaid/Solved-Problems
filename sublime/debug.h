#ifndef DEBUG_H
#define DEBUG_H

#define bug(...) cerr << "#" << __LINE__ << ' ' << #__VA_ARGS__ << " = ", _do(__VA_ARGS__)
template<typename T> void _do(vector<T> x){for(auto i: x) cerr << i << ' ';cerr << "\n";}
template<typename T> void _do(set<T> x){for(auto i: x) cerr << i << ' ';cerr << "\n";}
template<typename T> void _do(unordered_set<T> x){for(auto i: x) cerr << i << ' ';cerr << "\n";}
template<typename K, typename V> void _do(map<K, V> x){for(auto [key, value] : x) cerr << "{" << key << ": " << value << "} "; cerr << "\n";}
template<typename T> void _do(T && x) {cerr << x << endl;}
template<typename T, typename ...S> void _do(T && x, S&&...y) {cerr << x << ", "; _do(y...);}
template<typename T> void _do(vector<pair<T,T>> x) {for(auto [first, second] : x) cerr << "\n{" << first << ", " << second << "}"; cerr << "\n"; }
void _do(map<int, vector<int>> &g) {
    cerr << "Graph (Adjacency List):\n";
    for (auto &[node, children] : g) {
        cerr << "  " << node << " -> ";
        if (children.empty()) {
            cerr << "{}";
        } else {
            cerr << "{ ";
            for (auto &child : children)
                cerr << child << " ";
            cerr << "}";
        }
        cerr << "\n";
    }
    cerr << endl;
}

#endif // DEBUG_H

