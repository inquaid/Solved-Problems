#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

// Function to sort rows and columns of a matrix
vector<vector<int>> sortedMatrix(vector<vector<int>> &matrix, int n, int m) {
    vector<vector<int>> sorted_matrix = matrix;
    // Sort each row
    for (int i = 0; i < n; ++i) {
        sort(sorted_matrix[i].begin(), sorted_matrix[i].end());
    }
    // Sort each column
    for (int j = 0; j < m; ++j) {
        vector<int> col(n);
        for (int i = 0; i < n; ++i) {
            col[i] = sorted_matrix[i][j];
        }
        sort(col.begin(), col.end());
        for (int i = 0; i < n; ++i) {
            sorted_matrix[i][j] = col[i];
        }
    }
    return sorted_matrix;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        vector<vector<int>> a(n, vector<int>(m));
        vector<vector<int>> b(n, vector<int>(m));
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> a[i][j];
            }
        }
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> b[i][j];
            }
        }
        
        // Sort the matrices
        vector<vector<int>> sorted_a = sortedMatrix(a, n, m);
        vector<vector<int>> sorted_b = sortedMatrix(b, n, m);
        
        if (sorted_a == sorted_b) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
