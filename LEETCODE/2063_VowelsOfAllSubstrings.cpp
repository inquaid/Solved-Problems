// Your C++ code goes here
class Solution {
  public:
    long long countVowels(string word) {
        long long sum = 0;
        vector<char> vowels{'a', 'e', 'i', 'o', 'u'};
        long long n = word.size();
        for (int i = 0; i < n; i++) {
            char ch = word[i];
            if (find(vowels.begin(), vowels.end(), ch) != vowels.end()) {
                sum += (i + 1) * (n - i);
            }
        }
        return sum;
    }
};