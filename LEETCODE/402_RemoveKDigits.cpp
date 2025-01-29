// Your C++ code goes here
class Solution {
  public:
    string removeKdigits(string num, int k) {
        stack<int> st;
        for (auto ch : num) {
            int digit = ch - '0';
            while (st.size() and st.top() > digit and k > 0) {
                st.pop();
                k--;
            }
            st.push(digit);
        }
        while (k) {
            st.pop();
            k--;
        }
        string res = "";
        while (st.empty() == false) {
            res += st.top() + '0';
            st.pop();
        }
        reverse(res.begin(), res.end());
        while (res[0] == '0') {
            res.erase(begin(res));
        }
        if (res.empty())
            res = "0";
        return res;
    }
};