#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

// vi frames, vis;
vector<vi> pages;
vi frames;
map<int, vi> vis;
map<int, int> ac_bit;
void print() {
  for(auto f : frames) cout << f << " " << vis[f][0] << " " << vis[f][1] << endl;
  cout << endl;
}
int main() {
  int n, f; cin >> n >> f;
  
  for (int i = 0; i < n; ++i) {
    int p, op;
    cin >> p >> op;
    pages.push_back({p, op});
    if(vis.find(p) == vis.end()) {
      vis[p] = {0, 0};
    }
  }

  for (int i = 0; i < n; ++i) {
    int p = pages[i][0];
    if(frames.size() < f) {
      if(pages[i][1] == 1) { // 1 -> read, 2 -> write
        vis[p][0] = 1;
      } else if(pages[i][1] == 2) {
        vis[p][0] = vis[p][1] = 1;
      }
      frames.push_back(p);
    } else {
      int found = 0;
      for (int k = 0; k < f; ++k) {
        if(frames[k] == p) {
          found = 1; break;
        }
      }
      if(found) {
        print(); continue;
      }
      int pos = 0;

      int least = 4;
      for (int k = 0; k < f; ++k) {
        int temp = (vis[frames[k]][0] | vis[frames[k]][0]);
        if(temp < least) {
          least = temp;
          pos = k;
        }
      } 

      frames.erase(frames.begin() + pos);
      if(pages[i][1] == 1) { // 1 -> read, 2 -> write
        vis[p][0] = 1;
      } else if(pages[i][1] == 2) {
        vis[p][0] = vis[p][1] = 1;
      }  
      frames.push_back(p);
    }

    print();
  }
}
