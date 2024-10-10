#include <bits/stdc++.h>
using namespace std;
const int N = 10000000;
vector<int> lp(N + 1);
vector<int> pr;
int cnt = 0;
void seive(){
    for (int i = 2; i <= N; ++i){
        if (lp[i] == 0){
            lp[i] = i;
            pr.push_back(i);
        }
        for (int j = 0; i * pr[j] <= N; ++j){
            cnt++;
            lp[i * pr[j]] = pr[j];
            if (pr[j] == lp[i]){
                break;
            }
        }
    }
}
// void swp(int a, int b) {
//     // Cast the integers back to pointers and swap the values at those addresses
//     int temp = *(int*)a;  // Dereference the pointer (int*)a to get the value at address a
//     *(int*)a = *(int*)b;  // Set the value at address a to the value at address b
//     *(int*)b = temp;      // Set the value at address b to temp (original value of a)
// }

int main() {
    seive();
    for (int i = 0; i < 50; i++)
    {
        cout << pr[i] << " ";
    }
    cout << endl << cnt;
    
    // int a, b;
    // scanf("%d%d", &a, &b);  // Read two integers
    // swp((int)&a, (int)&b);  // Pass their addresses as integers to swp
    // printf("%d %d\n", a, b);  // Print the swapped values
}
