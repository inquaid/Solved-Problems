#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve();
int sum;
int main()
{
    // flash;
    int T;
    sum = 0;
    cin >> T;
    cin.ignore();
    while (T--)
    {
        solve();
    }

    return 0;
}

void solve()
{
    string line;
    getline(cin, line);
    // cin.ignore();
    stringstream ss(line);
    vector<string> words;
    string word;
    while (ss >> word)
    {
        // cout<<word<<" ";
        words.push_back(word);
    }

    if (!words.empty() && words[0] == "donate" && words.size() > 1)
    {
        sum += stoi(words[1]);
    }
    else if (!words.empty() && words[0] == "report")
    {
        cout << sum << endl;
    }
}