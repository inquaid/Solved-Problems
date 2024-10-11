#include<bits/stdc++.h>
using namespace std;

const int N = 10000000;
vector<int> lp(N + 1);
vector<int> pr;

void seive(){
    for (int i = 2; i <= N; ++i){
        if (lp[i] == 0){
            lp[i] = i;
            pr.push_back(i);
        }
        for (int j = 0; i * pr[j] <= N; ++j){
            lp[i * pr[j]] = pr[j];
            if (pr[j] == lp[i]){
                break;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    seive();
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int a;
        cin >> a;
        bool flag = false;
        int cnt = 0;
        for (int n = 0; n < pr.size() and pr[n] <= a / 2; n++)
        {
            int p1 = pr[n];
            int p2 = a - p1;
            if(lp[p2] == p2) cnt++;
        }
        cout << "Case " << i << ": " << cnt << endl;
        
    }
    
    
}