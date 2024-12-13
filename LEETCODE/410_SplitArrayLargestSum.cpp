class Solution {
public:
    bool isPossible(vector<int>& nums, int k, int maxSum) {
        // Conditions
        int CheckK = 1, tempSum = 0;
        for (auto it : nums) {
            if (it > maxSum)
                return false;
            tempSum += it;
            if (tempSum > maxSum) {
                tempSum = it;
                CheckK++;
            }
        }
        return CheckK <= k;
    }

    int binarySearchOnAnswers(vector<int>& nums, int k) {
        int l = 0, r = 1;
        while (isPossible(nums, k, r) == false) {
            r *= 2;
        }
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (isPossible(nums, k, mid)) { // lower bound
                r = mid - 1;
            } else
                l = mid + 1; // swap r, l for upper bound
        }
        return r + 1;
    }

    int splitArray(vector<int>& nums, int k) {
        return binarySearchOnAnswers(nums, k);
    }
};