#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin >> t;
    while (t--){
        int n,q;
        cin >> n >> q;
        vector<int> prex;
        prex.push_back(0);
        vector<int> max_;
        for (int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            if(i == 0) {
                prex.push_back(temp); 
                max_.push_back(temp); 
            }
            else {
                prex.push_back(temp + prex.back());
                max_.push_back(max(max_[i-1],temp));
            }
        } 

        for (int i = 0; i < q; i++){
            int cnt = 0, res = 0;
            int temp;
            cin >> temp;
            int index = upper_bound(max_.begin(), max_.end(), temp) - max_.begin();

            cout << prex[index] << " ";
        }
        cout << endl;    
    }
}