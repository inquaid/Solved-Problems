class Solution {
  public:
    int maxFreeTime(int eventTime, int k, vector<int> &startTime,
                    vector<int> &endTime) {
        int res = 0;
        vector<int> gaps;
        gaps.push_back(startTime[0]);
        for (int i = 1; i < startTime.size(); i++) {
            gaps.push_back(startTime[i] - endTime[i - 1]);
        }
        gaps.push_back(eventTime - endTime.back());
        vector<int> preSum;
        preSum.push_back(0);
        for (auto g : gaps) {
            preSum.push_back(preSum.back() + g);
        }
        for (int i = k + 1; i < preSum.size(); i++)
            res = max(res, preSum[i] - preSum[i - k - 1]);
        return res;
    }
};