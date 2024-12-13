class Solution {
public:
    bool isPossible(vector<int>& nums, int threshold, int divisor) {
        // Conditions
        int n = nums.size();
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += ceil(nums[i] / (divisor * 1.0));
        }

        return sum <= threshold;
    }

    int binarySearchOnAnswers(vector<int>& nums, int threshold) {

        int l = 1, r = *max_element(nums.begin(), nums.end());
        // while (isPossible(nums, threshold, r) == false) {
        //     r *= 2;
        // }
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (isPossible(nums, threshold, mid)) { // lower bound
                r = mid - 1;
            } else
                l = mid + 1; // swap r, l for upper bound
        }
        return r + 1;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        return binarySearchOnAnswers(nums, threshold);
    }
};