#include <bits/stdc++.h>
using namespace std;

string print(string s)
{
  int size = s.size();
  char temp;
  for (int i = 0, j = size - 1; i < j; i++, j--)
  {
    temp = s[i];
    s[i] = s[j];
    s[j] = temp;
  }
  return s;
}

int main()
{
  int T, size;
  cin >> T;
  cin.ignore();
  string s, word;

  while (T--)
  {
    getline(cin, s);

    size = s.size();
    word = "";
    for (int i = 0; i < size; i++)
    {
      if (s[i] != ' ')
      {
        word += s[i];
      }
      else
      {
        cout << print(word) << ' ';
        word = "";
        while (s[i + 1] == ' ')
        {
          cout << ' ';
          i++;
        }
      }
    }
    cout << print(word) << endl;
  }
}