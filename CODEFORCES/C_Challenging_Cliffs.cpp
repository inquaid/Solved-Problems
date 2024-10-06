#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        multiset<int> mst;
        for (int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            mst.insert(temp);
        }
        vector<int> v(mst.begin(), mst.end());
        if(n == 2){
            cout << v[0] << " " << v[1] << endl;
            continue;
        }
        int pos = 0;
        int dif = INT_MAX;
        for (int i = 0; i < n - 1; i++){
            int temp_dif = abs(v[i] - v[i + 1]);
            // if ( temp_dif == 0 ){
            //     pos = i;
            //     break;
            // }
            if(temp_dif < dif){
                dif = temp_dif;
                pos = i;
            }
        }
        pos++;
        // cout << v[pos] << " ";
        for (int i = pos; i < n; i++){
            cout << v[i] << " ";
        }
        for (int i = 0; i < pos; i++){
            cout << v[i] << " ";
        }
        cout << endl;
        // cout << v[pos + 1] << endl;
        
        
    }
    
}