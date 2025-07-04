#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void merge(vi &left, vi &right, vi &v);
void mergeSort(vi &v);

void mergeSort(vi &v) {
    int len = v.size();
    if(len <= 1) return;

    int mid = len / 2;
    vi left(mid), right(len - mid);

    copy(v.begin(), v.begin() + mid, left.begin());
    copy(v.begin() + mid, v.end(), right.begin());

    mergeSort(left);
    mergeSort(right);
    merge(left, right, v);
}

void merge(vi &left, vi &right, vi &v) {
    int ls = left.size(), rs = right.size(), i = 0, l = 0, r = 0;

    while(l < ls and r < rs) {
        if(left[l] < right[r]) {
            v[i] = left[l++];
        } else {
            v[i] = right[r++];
        }
        i++;
    }
    while(l < ls) {
        v[i++] = left[l++];
    }
    while(r < rs) {
        v[i++] = right[r++];
    }
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi v(n); 
        for(auto &i : v) cin >> i;
        string s; cin >> s;
        vi myV; 
        for (int i = 0; i < n; ++i) {
            if(s[i] == '0') {
                myV.push_back(v[i]);
            }
        }
        mergeSort(myV);
        cout << myV[0] << endl;
    }

}
