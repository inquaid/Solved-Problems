#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        if (s[0] != s[s.length()-1]){
            cout<<"Yes\n";
        }
        else cout<<"No\n";
    }
    
}