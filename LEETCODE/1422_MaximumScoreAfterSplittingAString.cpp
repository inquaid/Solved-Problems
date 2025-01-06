// Your C++ code goes here
class Solution {
  public:
    int maxScore(string s) {
        int temp = count(s.begin(), s.end(), '1');
        if (temp == s.size() or temp == 0) {
            return s.size() - 1;
        }
        if (s.size() <= 2 and s[0] == '0')
            return s.size();
        vector<int> v(s.size(), 0), v2(s.size(), 0);
        int cnt = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0')
                cnt++;
            v[i] = cnt;
        }
        cnt = 0;
        int res = 0;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == '1')
                cnt++;
            v2[i] += cnt;
        }

        for (int i = 1; i < s.size() - 1; i++) {
            res = max(res, v[i] + v2[i]);
        }

        return res;
    }
};

// algo 2
class Solution {
  public:
    int maxScore(string s) {
        int one = count(s.begin(), s.end(), '1');
        int zero = 0;
        int ans = 0;
        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == '1')
                one--;
            else
                zero++;
            ans = max(ans, one + zero);
        }
        return ans;
    }
};