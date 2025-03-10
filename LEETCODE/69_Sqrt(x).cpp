class Solution {
  public:
    int f(long long l, long long r, long long x) {
        if (l > r)
            return l - 1;
        long long mid = l + (r - l) / 2;
        if (mid * mid == x)
            return mid;
        else if (mid * mid > x)
            return f(l, mid - 1, x);
        // if(mid * mid >= x) {
        //     return f(l, mid - 1, x);
        // }
        else
            return f(mid + 1, r, x);
    }

    int mySqrt(int x) {
        return f(1, x, x);
        // long long l = 1, r = x;
        // while(l <= r) {
        //     long long mid = l + (r - l) / 2;
        //     if(mid * mid == x) {
        //         return mid;
        //     } else if(mid * mid < x) {
        //         l = mid + 1;
        //     } else r = mid - 1;
        // } return l - 1;
    }
};