#include <bits/stdc++.h>
using namespace std;

void transform(vector<string> &vs) {
  vector<string> res(vs.size(), string(vs[0].size(), '0'));
  for (int i = 0; i < vs.size(); ++i) {
    for (int j = 0; j < vs[0].size(); ++j) {
      res[i][j] = vs[j][i];
    }
  }
  vs = res;
  int temp_n = vs.size();
  for (int i = 0; i < temp_n / 2; ++i) {
    swap(vs[i], vs[temp_n - i - 1]);
  }
}

int main() {
  int n = 3;
  vector<string> vs;
  for (int i = 0; i < n; ++i) {
    string temp; cin >> temp;
    vs.push_back(temp);
  }
  for(auto s : vs) cout << s << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  transform(vs);
  for(auto s : vs) cout << s << endl;

}