class Solution {
public:
    bool isPossible(vector<int>& weights, int days, int maxWeight) {
        // Conditions
        int totalNeededDays = 1, sum = 0;
        for (auto it : weights) {
            if (it > maxWeight)
                return false;
            sum += it;
            if (sum > maxWeight) {
                sum = it;
                totalNeededDays++;
            }
        }
        return totalNeededDays <= days;
    }

    int binarySearchOnAnswers(vector<int>& weights, int days) {

        int l = 0, r = 1;
        while (isPossible(weights, days, r) == false) {
            r *= 2;
        }
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (isPossible(weights, days, mid)) { // lower bound
                r = mid - 1;
            } else
                l = mid + 1; // swap r, l for upper bound
        }
        return r + 1;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        return binarySearchOnAnswers(weights, days);
    }
};