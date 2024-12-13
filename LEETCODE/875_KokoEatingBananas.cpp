class Solution {
public:
    bool isPossible(vector<int>& piles, int h, long long mid) {
        // Conditions
        long long total = 0, sum = 0;
        for (auto it : piles) {
            total += ceil(it / double(mid));
        }

        return total <= h;
    }

    int binarySearchOnAnswers(vector<int>& piles, int h) {

        long long l = 1, r = 1;
        while (isPossible(piles, h, r) == false) {
            r *= 2;
        }
        while (l <= r) {
            long long mid = l + (r - l) / 2;
            if (isPossible(piles, h, mid)) { // lower bound
                r = mid - 1;
            } else
                l = mid + 1; // swap r, l for upper bound
        }
        return r + 1;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        return binarySearchOnAnswers(piles, h);
    }
};