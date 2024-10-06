#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main(){
    int n;
    cin >> n;
    while (n != 0)
    {
        int temp, sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            sum += temp;
        }
        cout << sum / (n * 1.0) << endl;
        cin >> n;
    }   
    
}