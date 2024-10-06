#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        string s;
        cin >> n >> s;
        set<string> st;
        deque<char> dq (s.begin(), s.end());

        // for(auto i : dq) cout << i << " ";
        // cout << endl;
        for (int i = 0; i < n; i++)
        {
            char temp1 = dq.front();
            dq.pop_front();
            char temp2 = dq.front();
            dq.pop_front();
            st.insert(dq.begin(), dq.end());
            
        }
        
    }
    
}