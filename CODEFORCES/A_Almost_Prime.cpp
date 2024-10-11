#include<bits/stdc++.h>
using namespace std;

const int N = 10000;
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

int cnt_primes(int a){
    int cnt = 0, indx = 0;
    while ( pr[indx] * pr[indx] <= a)
    {
        bool flag = false;
        while (a%pr[indx] == 0)
        {
            a = a / pr[indx];
            flag = true;
        }
        if(flag)
            cnt++;
        indx++;        
    }
    if(a > 1) cnt++;
    return cnt;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    seive();
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 2; i <= n; i++)
    {
        if(cnt_primes(i) == 2) cnt++;
    }
    cout << cnt;
    
    
}