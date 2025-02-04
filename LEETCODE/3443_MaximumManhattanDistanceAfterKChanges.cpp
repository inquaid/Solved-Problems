class Solution {
public:
    int maxDistance(string s, int k) {
        map<char, int> mp;
        int res = 0;

        for (auto ch : s) {
            mp[ch]++;
            int y = abs(mp['N'] - mp['S']);
            int x = abs(mp['E'] - mp['W']);
            res = max(res, x + y + 2 * (min(min(mp['N'], mp['S']) + min(mp['E'], mp['W']), k)));
        }
        return res;
    }
};
