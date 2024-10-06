#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        int res = 0, cnt = 0;
        bool yes = true;
        for (int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            if(yes and (res + temp) <= k){
                cnt ++;
                res += temp;
            }
            else{
                yes = false;
            }

        }
        cout << cnt << endl;
        
    }
    
}