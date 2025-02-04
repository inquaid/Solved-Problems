class Solution {
  public:
    string findValidPair(string s) {
        map<char, int> mp;
        for (auto ch : s)
            mp[ch]++;
        string res = "";
        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] != s[i + 1] and mp[s[i]] == s[i] - '0' and
                mp[s[i + 1]] == s[i + 1] - '0') {
                if (count(res.begin(), res.end(), s[i]) == 0 and
                    count(res.begin(), res.end(), s[i + 1]) == 0) {
                    res += s[i];
                    res += s[i + 1];
                    break;
                }
            }
        }
        return res;
    }
};