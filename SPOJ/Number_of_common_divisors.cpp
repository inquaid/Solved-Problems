#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
        int x = __gcd(a, b);
        int cnt = 0;
        for (int i = 1; i * i <= x; i++)
        {
            if(x%i == 0){
                if( (x / i) == i){
                    cnt++;
                }
                else cnt += 2;
            }
        }
        cout << cnt << "\n";

    }
    
}