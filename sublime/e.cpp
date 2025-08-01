#include <bits/stdc++.h>
using namespace std;

int n_times = 1, m_times = 2;
const int n = n_times * 8, m = m_times * 8, p = (n_times - 1) * 8 + 1, q = (m_times - 1) * 8 + 1;
vector<string> vs;
vector<vector<string>> res;

void transform(vector<string> &vs) {
  vector<string> res(vs.size(), string(vs[0].size(), '1'));
  for (int i = 0; i < vs.size(); ++i) {
    for (int j = 0; j < vs[0].size(); ++j) {
      res[i][j] = vs[j][i];
    }
  }
  vs = res;
}

void f(int b1, int b2) {
  int strt, end, cnt;
  int lim = b1 ? p : q;
  strt = b2 ? (lim - 1) : 0;
  end = b2 ? -1 : lim;
  cnt = b2 ? -1 : 1;

  for (int k = strt; k != end; k += cnt) {
    for (int i = 0; i < 8; ++i) {
      for (int j = 0; j < 8; ++j) {
        cout << res[k][i][j] << "";
      } cout << endl;
    } cout << endl;
  } 
}

void f2(int b1) {
  int end = b1 ? q : p;
  int lim = b1 ? n : m;
  for (int k = 0; k < end; ++k) {
    vector<string> temp(lim, string(lim, '1'));
    for (int i = 0; i < lim; ++i) {
      for (int j = 0; j < lim; ++j) {
        temp[i][j] = b1 ? vs[i][j + k] : vs[i+k][j];
      }
    }
    transform(temp);
    res.push_back(temp);
  }  
}

int main() {
  // freopen("input.txt", "r", stdin);   
  // freopen("output.txt", "w", stdout); 

  int mtx[n][m];
  vs.assign(n, string(m, '1'));
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      mtx[i][j] = 1;
    }
    string temp; cin >> vs[i];
    // cout << temp << endl;
    // vs.push_back(temp);
  }
  // for(auto s : vs) cout << s << endl; return 0;
  
  // for (int i = 0; i < n; ++i) {
  //   for (int j = 0; j < m; ++j) {
  //     cout << mtx[i][j] << "";
  //   } cout << endl;
  // } return 0;

  // cout << vs[7][0] << endl;

  /***
   * 0 col
   * 1 row
   **/

  f2(1);

  /**
   * 0 0 towards left
   * 0 1 towards right
   * 1 0 towards down
   * 1 1 towards up
   **/

  f(0, 0);
  
}