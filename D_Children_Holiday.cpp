#include <bits/stdc++.h>
using namespace std;

typedef struct assistant {
    int t = 0;
    int z = 0;
    int y = 0;
} assist;

int m, n;
bool possible(assist workers[], int time) {
    int total = 0;
    vector<int> numberOfBallons(n, 0);
    for (int i = 0; i < n; i++) {
        if(time < 0){

        }
        int t = workers[i].t;
        int z = workers[i].z;
        int y = workers[i].y;

        double totalTime = (t * z) + y;
        int temp = floor(time / totalTime);
        // temp--;
        if ((time - (totalTime * temp)) <= (t * z)) {
            temp++;
        }
        // time -= (totalTime * temp);
        numberOfBallons[i] = temp;
    }
}

int main() {
    cin >> m >> n;
    assist my_assit[n];
    for (int i = 0; i < n; i++) {
        int t, z, y;
        cin >> t >> z >> y;
        my_assit[i].t = t;
        my_assit[i].z = z;
        my_assit[i].y = y;
    }
    int res = 0, l = 0, r = 1e9;
    while (l <= r) {
        int mid = l + (r - l) / 2;
    }
}