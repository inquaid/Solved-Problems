class Solution {
  public:
    int sumFourDivisors(vector<int> &nums) {
        int res = 0;
        for (auto &i : nums) {
            int cnt = 0, val = 0;
            for (int d = 1; d * d <= i; d++) {
                if (i % d == 0) {
                    cnt++;
                    val += d;
                    // cout << i << " ";
                    if (i / d != d) {
                        cnt++;
                        // cout << i / d << " ";
                        val += i / d;
                    }
                }
            }
            // cout << i << " " << cnt << " " << val << endl;
            // cout << endl;
            if (cnt == 4)
                res += val;
        }
        return res;
    }
};