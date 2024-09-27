#include <bits/stdc++.h>
using namespace std;
const int N = 3010;

int ary[N][N];
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> points;

    for (int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        points.push_back({x, y});
        ary[x + 1010 ][y + 1010]++;
    }
    int cnt = 0;

    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            int sum_x = points[i].first + points[j].first;
            int sum_y = points[i].second + points[j].second;

            if (sum_x % 2 == 0 && sum_y % 2 == 0){
                int mid_x = sum_x / 2;
                int mid_y = sum_y / 2;

                cnt += ary[mid_x + 1010][mid_y + 1010];                
            }
        }
    }
    cout << cnt << endl;
}