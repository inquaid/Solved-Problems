//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string maximumFrequency(string s);

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    for (int i = 0; i < t; i++)
    {

        string s;
        getline(cin, s);

        cout << maximumFrequency(s) << endl;
    }
    return 0;
}

// } Driver Code Ends

string maximumFrequency(string s)
{
    // Complete the function

    unordered_map<string, int> mp;
    mp.clear();
    istringstream is(s);
    string word, max;
    while (is >> word)
    {
        mp[word]++;
    }
    int mx = 0;
    
    for (auto i : mp)
    {
        if (i.second > mx)
        {
            mx = i.second;
            max = i.first;
        }
    }
    max += " ";
    max += to_string(mx);
    // cout<<max;
    return max;
}
