//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

class Solution {
  public:
    static bool comp(pair<int, int> a, pair<int, int> b) {
        return (double)a.first / a.second > (double)b.first / b.second;
    }
    // Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(vector<int> &val, vector<int> &wt, int capacity) {
        // Your code here
        vector<pair<int, int>> vpr;
        for (int i = 0; i < val.size(); i++) {
            vpr.push_back({val[i], wt[i]});
        }
        double res = 0;
        sort(vpr.begin(), vpr.end(), comp);
        for (int i = 0; i < val.size(); i++) {
            if (capacity <= 0)
                break;
            if (capacity < vpr[i].second) {
                res += ((double)vpr[i].first / vpr[i].second) * capacity;
                capacity = 0;
            } else {
                res += vpr[i].first;
                capacity -= vpr[i].second;
            }
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    // taking testcases
    cin >> t;
    cin.ignore(); // to ignore the newline after the number of test cases
    cout << setprecision(6) << fixed;

    while (t--) {
        // Reading the value array
        vector<int> values;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            values.push_back(number);
        }

        // Reading the weight array
        vector<int> weights;
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            weights.push_back(number);
        }

        // Reading the capacity
        int w;
        cin >> w;
        cin.ignore(); // to ignore the newline after capacity

        // function call
        Solution ob;
        cout << ob.fractionalKnapsack(values, weights, w) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends