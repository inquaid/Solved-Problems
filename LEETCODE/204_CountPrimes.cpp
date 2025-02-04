class Solution {
  public:
    int countPrimes(int n) {
        int N = n + 1;
        vector<int> lp(N + 1, 0);
        vector<int> pr;

        for (int i = 2; i <= N; ++i) {
            if (lp[i] == 0) {
                lp[i] = i;
                pr.push_back(i);
            }

            for (int j = 0; i * pr[j] <= N; ++j) {
                lp[i * pr[j]] = pr[j];
                if (pr[j] == lp[i]) {
                    break;
                }
            }
        }

        return lower_bound(pr.begin(), pr.end(), n) - pr.begin();
    }
};