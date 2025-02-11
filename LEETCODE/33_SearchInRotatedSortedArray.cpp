// Your C++ code goes here
class Solution {
  public:
    int search(vector<int> &nums, int target) {
        int l = 0, r = nums.size() - 1;
        while (l < r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] > nums[r]) {
                l = mid + 1;
            } else
                r = mid;
        }
        int extra = l;
        l = 0, r = nums.size() - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            int indx = (mid + extra) % nums.size();
            if (nums[indx] == target)
                return indx;
            if (nums[indx] < target) {
                l = mid + 1;
            } else
                r = mid - 1;
        }
        return -1;
    }
};