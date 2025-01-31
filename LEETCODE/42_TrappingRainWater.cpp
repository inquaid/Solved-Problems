// Your C++ code goes here
class Solution {
  public:
    int trap(vector<int> &height) {
        stack<int> st, afterMax;
        int res = 0;
        int prevMax = 0;
        for (int i = height.size() - 1; i >= 0; i--) {
            if (afterMax.empty()) {
                afterMax.push(height[i]);
            } else {
                int mx = max(afterMax.top(), height[i]);
                afterMax.push(mx);
            }
        }
        for (auto i : height) {
            int tempAfterMax = afterMax.top();
            int mn = min(tempAfterMax, prevMax);
            if (mn >= i) {
                res += mn - i;
            }
            afterMax.pop();
            prevMax = max(prevMax, i);
            // cout << prevMax << " ";
        }
        return res;
    }
};

class Solution2 {
  public:
    int trap(vector<int> &height) {
        int left = 0, right = height.size() - 1;
        int leftMax = 0, rightMax = 0, res = 0;

        while (left <= right) {
            if (leftMax <= rightMax) {
                if (height[left] < leftMax) {
                    res += leftMax - height[left];
                } else
                    leftMax = height[left];
                left++;
            } else {
                if (height[right] < rightMax) {
                    res += rightMax - height[right];
                } else
                    rightMax = height[right];
                right--;
            }
        }
        return res;
    }
};