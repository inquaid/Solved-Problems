#include <bits/stdc++.h>
using namespace std;

/**
 * depth log(n)
 * timeComplexity :
 *      query = update = O(log(n))
 *      init  =  O(nlog(n))
 *
 */

#define mx 100001

int arr[mx];
int tree[mx * 3];
void init(int node, int b, int e) {
    // node = present node
    // (b, e) range

    if (b == e) {
        tree[node] = arr[b];
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    init(Left, b, mid);
    init(Right, mid + 1, e);
    tree[node] = tree[Left] + tree[Right];
}

int query(int node, int b, int e, int i, int j) {
    if (i > e or j < b) {
        return 0; // out of the range
    }
    if (i <= b and j >= e) {
        // relevent range
        return tree[node];
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + 2) / 2;
    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid + 1, e, i, j);

    return max(p1, p2);
}

void update(int node, int b, int e, int i, int newValue) {
    if (i > e or i < b) {
        return; // out of range
    }
    if (i <= b and i >= e) {
        tree[node] = newValue;
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    update(Left, b, mid, i, newValue);
    update(Right, mid + 1, e, i, newValue);
    tree[node] = tree[Left] + tree[Right];
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}