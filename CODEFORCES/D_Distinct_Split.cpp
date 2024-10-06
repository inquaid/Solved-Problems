#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        // vector<int> prefix(26, 0), suffix(26, 0);
        map<char, int> prefix, suffix;
        int prex_cnt = 0, suffix_cnt = 0;

        for (int i = 0; i < n; i++){
            if(suffix[s[i]] == 0) suffix_cnt ++;
            suffix[s[i]] ++;
        }

        int res = 0;

        for (int i = 0; i < n; i++){
            if(prefix[s[i]] == 0) prex_cnt ++;
            prefix[s[i]] ++;
            
            suffix[s[i]] --;
            if(suffix[s[i]] == 0) suffix_cnt --;

            res = max(res, prex_cnt + suffix_cnt);
        }
        cout << res << endl;
        
    }
    
}